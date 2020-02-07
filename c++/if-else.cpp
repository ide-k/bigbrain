#include <iostream>

using namespace std;

int main() {

    int a;
    int b;

    a = 0;
    b = 4;

    if(a == b) {
        cout<<"yay"<<endl;
    }
    else {
        while(a!=b) {
            cout<<a<<endl;
            a++;
        }
    }

    cout<<"done"<<endl;

    a = 4;

    // trying to use the ? operator
    a==b? cout<<"yes"<<endl : cout<<"no"<<endl;


    // switch statement
   char grade = 'A';


    switch(grade) {
        case 'A' :
            cout << "Excellent!" << endl; 
            break;
        case 'B' :
        case 'C' :
            cout << "Well done" << endl;
            break;
        case 'D' :
            cout << "You passed" << endl;
            break;
        case 'F' :
            cout << "Better try again" << endl;
            break;
        default :
            cout << "Invalid grade" << endl;
    }
    cout << "Your grade is " << grade << endl;

    return 0;
}