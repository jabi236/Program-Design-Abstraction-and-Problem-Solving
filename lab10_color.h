#ifndef LAB10_COLOR_H
#define LAB10_COLOR_H

#include <iostream>

using namespace std;

class lab10_color{
    private:
        int red;
        int green;
        int blue;
    public:
        lab10_color();
        void set(int newR, int newG, int newB);
        int getRed();
        int getGreen();
        int getBlue();
        void print();
        friend lab10_color operator+(lab10_color a, lab10_color b);
        friend lab10_color operator-(lab10_color a, lab10_color b);
};
lab10_color operator*(int scalar, lab10_color a);
lab10_color operator/(lab10_color a, int scalar);

#endif //COLOR_H