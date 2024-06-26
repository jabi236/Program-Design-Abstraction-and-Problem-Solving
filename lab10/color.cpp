#include "color.h"

color::color(){
    red, blue, green = 0;
}
void color::set(int newR, int newG, int newB){
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
int color::getRed(){
    return red;    
}
int color::getGreen(){
    return green;
}
int color::getBlue(){
    return blue;
}
void color::print(){
    cout << "R:" << red << "  B:" << blue << " G:" << green << endl;
}
color operator+(color a, color b){
    color c;
    c.set(a.red + b.red, a.green + b.green, a.blue + b.blue);
    return c;
}
color operator-(color a, color b){
    color c;
    c.set(a.red - b.red, a.green - b.green, a.blue - b.blue);
    return c;
}
color operator*(int scalar, color a){
    color b;
    b.set(a.getRed() * scalar, a.getBlue() * scalar, a.getGreen() * scalar);
    return b;
}
color operator/(color a, int scalar){
    color b;
    if(scalar == 0){
        b.set(0,0,0);
        return b;
    }
    b.set(a.getRed() / scalar, a.getBlue() / scalar, a.getGreen() / scalar);
    return b;
}
