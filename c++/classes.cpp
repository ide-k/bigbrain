#include <iostream>

using namespace std;

class Box {

    public:
        double length;
        double width;
        double height;

        // member function declaration
        double getVolume(void);
        double getArea(void);
        void setLength(double len);
        void setWidth(double wid);
        void setHeight(double hei);

}; // need a semicolon at the end of classes apparently

// member function init
double box::getVolume(void) {
    return length * width * height;
}

// you can also make methods outside the class using the scope resolution operator (::)
double box::getArea(void) {
    return length * width;
}

void box::setLength(double len) {
    length = len;
}

void box::setWidth(double wid) {
    width = wid;
}

void box::setHeight(double hei) {
    height = hei;
}

int main() {

    // declaring 2 box objects
    Box box1;
    Box box2;
    double volume;

    // box1 specs
    box1.setHeight(3.0);
    box1.setLength(7.2);
    box1.setWidth(4.5);

    // box2 specs
    box2.setHeight(30.0);
    box2.setLength(72.2);
    box2.setWidth(45.5);

    // volume of box1
    volume = box1.length * box1.width * box1.height;
    cout<<"Volume of box1: "<<volume<<endl;

    // Volume of box2
    volume = box2.length * box2.width * box2.height;
    cout<<"Volume of box2: "<<volume<<endl;


    // oop stuff
    double oopVolume;
    double oopArea;
    
    oopVolume = box1.getVolume();
    cout << "oopVolume is: " << oopVolume << endl;

    oopArea = box2.getArea();
    cout << "oopArea is: " << oopArea << endl;

    return 0;
}