//------------------------------------------------------------------------------
//                                  Lab 6
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 6/3/24
// Description: write and test a set of functions dealing with a Fraction, based 
// on detailed function designs.
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string

const int READ_ERROR    = -1;
const int MAX_INV_ITEMS = 10;

// describes a single item in the inventory, and on an order
struct item {
	string prodCode;		// product code: length 12, no spaces
	string description;		// product description: max length 28, has spaces
	double price;			// price of the product, max 999.99
};

const int MAX_ORDERS = 10;

// describes a customer order or "basket"
const int MAX_ORDER_ITEMS = 5;
struct order {
	long   orderNumber;		// unique order number for this order
	string custName;		// customer name
	double totalPrice;		// price of all items purchased
	item items[MAX_ORDER_ITEMS];	// list of items purchased
	int numItems;			// number of items purchased
};

//----------------------------------------------------------------------------
//                                  readInventory
//----------------------------------------------------------------------------
// Modifies: inventory list (sets numberOfItems to -1 on READ ERROR)
//           lastOrderNum
// Reads inventory data from a file into an array of inventory items
//----------------------------------------------------------------------------
void readInventory(item inv[], int & numberOfInvItems, int & lastOrderNum) {
	ifstream f;

	// open the inventory file
	f.open("inventory.txt");
	if (f.fail()) {
		cout << "readFile:: error opening inventory.txt\n";
		numberOfInvItems = READ_ERROR;
		return;
	}

	// read number of items from first line
	f >> numberOfInvItems >> lastOrderNum;

	// for each item, read the data for the item
	for (int i = 0; i < numberOfInvItems; i++) {
		f >> inv[i].prodCode >> inv[i].price;
		f.ignore(); // finished reading integer, getline() on string is next
		getline(f, inv[i].description);
	}
	f.close();
} // readInventory()

//----------------------------------------------------------------------------
//                                  isValidOption
//----------------------------------------------------------------------------
// given: option character, and string of valid options
// returns true or false if menu option is valid
//----------------------------------------------------------------------------
bool isValidOption(char o, string val) {
	
    for(int i = 0; i < val.length(); i++){
        if(val[i] == o){
            return true;
        }
    }

    return false;
} // isValidOption()

//----------------------------------------------------------------------------
//                                  getMenuOption
//----------------------------------------------------------------------------
// returns menu option character
//----------------------------------------------------------------------------
char getMenuOption() {
	
    string userInput;
    char option;
    // display menu
    cout << "+-----------------------------------------------------+\n"
         << "|                     JAMAZON.COM                     |\n"
         << "|                       by James                      |\n"
         << "+-----------------------------------------------------+\n"
         << "I - List our Inventory\n"
         << "O - Make an Order\n"
         << "L - List all Orders made\n"
         << "X - Exit\n";
    // user input
    cout << "Enter an option: ";
    if(cin.peek() == '\n') cin.ignore(); // just in case it's needed
    getline(cin, userInput);
    option = toupper(userInput[0]);
    // userInput[0] is the first char of the string userInput
    // toupper is a C++ function that converts a lowercase char to uppercase

    // loop until valid option. Use isValidOption function with string of valid options to check
    while(!isValidOption(option, "IOLX")){
        cout << "Invalid option, enter I, O, L or X!\n";

        cout << "Enter an option: ";
        if(cin.peek() == '\n') cin.ignore();
        getline(cin, userInput);
        option = toupper(userInput[0]);
    }

    return option;
} // getMenuOption()

//----------------------------------------------------------------------------
//                                  displayList
//----------------------------------------------------------------------------
// given: inventory struct
// prints list of items in inventory
//----------------------------------------------------------------------------
void displayList(item inv[], int numItems) {
	for(int i = 0; i < numItems; i++){
        cout << setw(3) << right << i << "  " << setw(12) << left << inv[i].prodCode << "  $" << setw(6) << right << inv[i].price << "  " << inv[i].description;
        if(i != numItems-1){
            cout << endl;
        }
    }
    
} // displayList()

//----------------------------------------------------------------------------
//                                  displayInventory
//----------------------------------------------------------------------------
// given: inventory struct
// prints header for inventory list
//----------------------------------------------------------------------------
void displayInventory(item inv[], int numItems) {
	cout << "+-----------------------------------------------------+\n"
         << "|                       Products                      |\n"
         << "+-----------------------------------------------------+\n"
         << " #   PRODUCT CODE   PRICE   PRODUCT DESCRIPTION\n"
         << "---  ------------  -------  ---------------------------\n";
    displayList(inv, numItems);
    cout << endl << "Number of items in inventory: " << numItems << endl << endl;
} // displayInventory()

//----------------------------------------------------------------------------
//                                  displayOrder
//----------------------------------------------------------------------------
// given: order struct
// prints header for inventory list
//----------------------------------------------------------------------------
void displayOrder(order o){
	cout << "ORDER: " << o.orderNumber << "   " << o.custName << endl;
    displayList(o.items, o.numItems);
    cout << "\nTOTAL              $" << setw(6) << right << o.totalPrice << endl << endl;
} // displayOrder()

//----------------------------------------------------------------------------
//                                  startOrder
//----------------------------------------------------------------------------
// modifies partial aray of orders and LastOrderNumber
//----------------------------------------------------------------------------
void startOrder(order o[], int & numOrds, int & LastONum){
    o[numOrds].orderNumber = LastONum + 1;
    o[numOrds].totalPrice = 0;
    o[numOrds].numItems = 0;

    cout << setw(21) << left << "Order Number:" << o[numOrds].orderNumber << endl
         << setw(21) << left << "Enter customer name:";
    if(cin.peek() == '\n') cin.ignore();
    getline(cin, o[numOrds].custName);

    LastONum = o[numOrds].orderNumber;
    numOrds++;
} // startOrder()

//----------------------------------------------------------------------------
//                                  orderItem
//----------------------------------------------------------------------------
// given: inventory partial array
// true if user chose to quit and false if the order is not done
//----------------------------------------------------------------------------
bool orderItem(item inv[], order o[], int numOrd, int numInInv){
    int numItemInput;
    cout << "Enter an item number: ";
    cin >> numItemInput;
    while(numItemInput < -1 || numItemInput > numInInv-1){
        cout << "Invalid entry. Enter number -1 to " << numInInv-1 << endl;

        cout << "Enter an item number: ";
        cin >> numItemInput;
    }
    if(numItemInput == -1){
        return true;
    }
    o[numOrd-1].items[o[numOrd-1].numItems] = inv[numItemInput];
    o[numOrd-1].totalPrice = o[numOrd-1].totalPrice + inv[numItemInput].price;
    cout << inv[numItemInput].description << " added to your basket. Current total is " << o[numOrd-1].totalPrice << endl;
    o[numOrd-1].numItems++;

    return false;
} // orderItem()

//----------------------------------------------------------------------------
//                                  makeOrder
//----------------------------------------------------------------------------
// given: inventory partial array
// Adds new order struct to orders partial array
//----------------------------------------------------------------------------
void makeOrder(item inv[], order o[], int numInv, int & lastONum, int & numOrd){
	if(numOrd >= MAX_ORDERS){
        cout << "Sorry, we can not take more orders today.\n";
        return;
    }
    startOrder(o, numOrd, lastONum);
    displayInventory(inv, numInv);

    while(!orderItem(inv, o, numOrd, numInv)){}

    cout << "\nThank you for your order!\n";
    displayOrder(o[numOrd-1]);
} // makeOrder()

//----------------------------------------------------------------------------
//                                  listOrders
//----------------------------------------------------------------------------
// given: partial array of orders
// prints list of orders
//----------------------------------------------------------------------------
void listOrders(order o[], int numOrders){
	cout << "+-----------------------------------------------------+\n"
         << "|                        Orders                       |\n"
         << "+-----------------------------------------------------+\n";
    for(int i = 0; i < numOrders; i++){
        displayOrder(o[i]);
    }
    cout << "Total Number of Orders = " << numOrders << endl;
} // listOrders()

//----------------------------------------------------------------------------
//                                  writeOrders
//----------------------------------------------------------------------------
// given: partial array of orders
// writes orders made to text file
//----------------------------------------------------------------------------
void writeOrders(order o[], int numOrders){
	ofstream f;
    f.open("orders.txt");
    if (f.fail()) {
		cout << "writeFile:: error opening orders.txt\n";
		return;
	}
    f << numOrders << endl;
    for(int i = 0; i < numOrders; i++){
        f << o[i].orderNumber << " " << o[i].numItems << " " << o[i].totalPrice << " " << o[i].custName << endl;
        for(int j = 0; j < o[i].numItems; j++){
            f << o[i].items[j].prodCode << " " << o[i].items[j].price << " " << o[i].items[j].description << endl;
        }
    }
    f.close();
} // writeOrders()

int main(){

    item inv[MAX_INV_ITEMS];
    order orders[MAX_ORDERS];
    int lastOrderNumber = 0;
    int numOrders = 0;
    int numInv = 0;
    char menuOption;

    readInventory(inv, numInv, lastOrderNumber);
    menuOption = getMenuOption();
    while(menuOption != 'X'){
        if(menuOption == 'I'){
            displayInventory(inv, numInv);
        }
        else if(menuOption == 'O'){
            makeOrder(inv, orders, numInv, lastOrderNumber, numOrders);
        }
        else if(menuOption == 'L'){
            listOrders(orders, numOrders);  
        }
        menuOption = getMenuOption();
    }

    writeOrders(orders, numOrders);
    return 0;
};