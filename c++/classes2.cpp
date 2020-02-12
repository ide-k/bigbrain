#include <iostream>

using namespace std;

class Box {
    public:
        double length;
        double width;
        double height;

        // member functions
        double getVolume(void);
        double getArea(void);
        void setLength(double len);
        void setWidth(double wid);
        void setHeight(double hei);  
};

// defining member functions
double Box::getVolume(void) {
    return length * width * height;
}

double Box::getArea(void) {
    return length * width;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setWidth(double wid) {
    width = wid;
}

void Box::setHeight(double hei) {
    height = hei;
}

int main() {
    // Declaring box objects
    Box box1;
    Box box2;
    double volume = 0.0;
    double area = 0.0;

    // box1 specs
    box1.setLength(5);
    box1.setWidth(4);
    box1.setHeight(2.5);

    // box2 specs
    box2.setLength(50);
    box2.setWidth(40);
    box2.setHeight(20.5);

    // volume of box1
    volume = box1.getVolume;
    cout << "Volume of box1: " << volume << endl;

    // area of box2
    area = box2.getArea;
    cout << "area of box2: " << area << endl;

    return 0;
}