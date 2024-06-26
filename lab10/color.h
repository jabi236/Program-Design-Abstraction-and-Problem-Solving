#ifndef COLOR_H
#define COLOR_H

#include <iostream>

using namespace std;

class color{
    private:
        int red;
        int green;
        int blue;
    public:
        color();
        void set(int newR, int newG, int newB);
        int getRed();
        int getGreen();
        int getBlue();
        void print();
        friend color operator+(color a, color b);
        friend color operator-(color a, color b);
};
color operator*(int scalar, color a);
color operator/(color a, int scalar);

#endif //COLOR_H