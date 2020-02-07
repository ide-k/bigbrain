#include <iostream>

using namespace std;

int main() {

    // trying to use basic while loops, not that different from java
    int a = 1;
    int b = 2;

    while(a != b) {
        cout<<a<<endl;
        a++;
    }

    cout<<"done while. a is: "<<a<<endl;

    a = 0;

    // doing the same thing but in a for loop
    for(a; a<b; a++) {
        cout<<a<<endl;
    }

    cout<<"done for. a is: "<<a<<endl;

    return 0;
}