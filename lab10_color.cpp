#include "lab10_color.h"

lab10_color::lab10_color(){
    red, blue, green = 0;
}
void lab10_color::set(int newR, int newG, int newB){
    if(newR < 0){
        red = 0;
    }
    else if(newR > 255){
        red = 255;
    }
    else{
        red = newR;
    }
    if(newG < 0){
        green = 0;
    }
    else if(newG > 255){
        green = 255;
    }
    else{
        green = newG;
    }
    if(newB < 0){
        blue = 0;
    }
    else if(newB > 255){
        blue = 255;
    }
    else{
        blue = newB;
    }
}
int lab10_color::getRed(){
    return red;    
}
int lab10_color::getGreen(){
    return green;
}
int lab10_color::getBlue(){
    return blue;
}
void lab10_color::print(){
    cout << "R:" << red << "  B:" << blue << " G:" << green << endl;
}
lab10_color operator+(lab10_color a, lab10_color b){
    lab10_color c;
    c.set(a.red + b.red, a.green + b.green, a.blue + b.blue);
    return c;
}
lab10_color operator-(lab10_color a, lab10_color b){
    lab10_color c;
    c.set(a.red - b.red, a.green - b.green, a.blue - b.blue);
    return c;
}
lab10_color operator*(int scalar, lab10_color a){
    lab10_color b;
    b.set(a.getRed() * scalar, a.getBlue() * scalar, a.getGreen() * scalar);
    return b;
}
lab10_color operator/(lab10_color a, int scalar){
    lab10_color b;
    if(scalar == 0){
        b.set(0,0,0);
        return b;
    }
    b.set(a.getRed() / scalar, a.getBlue() / scalar, a.getGreen() / scalar);
    return b;
}
