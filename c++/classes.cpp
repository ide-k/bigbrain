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
        void setLength(void);
        void setWidth(void);
        void setHeight(void);

}; // need a semicolon at the end of classes apparently

// member function init
double box::getVolume(void) {
    return length * width * height;
}

double box::getArea(void) {
    return length * width;
}

// init the set functions

int main() {

    // declaring 2 box objects
    Box box1;
    Box box2;
    double volume;

    // box1 specs
    box1.height = 3.0;
    box1.length = 7.2;
    box1.width = 4.5;

    // box2 specs
    box2.height = 30.0;
    box2.length = 72.2;
    box2.width = 45.5;

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