#include <iostream>

using namespace std;

int main() {

    // strings are legit just arrays of chars
    // char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // this is the same as line 11

    char greeting[] = "Hello";

    cout<<greeting<<endl;

    //strcat is the concatenation function (#include <cstring> or <string>)

    return 0;
}