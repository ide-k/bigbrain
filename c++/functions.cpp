#include <iostream>

using namespace std;

// declaring functions with parameters is a thing
int max(int num1, int num2);


// main is technically a function too btw
int main() {

    int a = 1;
    int b = 2;
    int ret;

    ret = max(a,b);
    cout<<"max value is: "<<ret<<endl;

    return 0;
}

// the actual function that was declared before main()
int max(int num1, int num2) {
    // local variable declaration
    int result;
 
    if (num1 > num2) {
        result = num1;
    }
    else {
        result = num2;
    }
    return result; 
}
