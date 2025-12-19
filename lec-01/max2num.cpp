// calculate maximum of two numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, maxNum;
    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number b: ";
    cin >> b;
    
    if(a < b) {
        maxNum = b;
    } else {
        maxNum = a;
    }
    cout << "maximum number is: " << maxNum << endl;
    return 0;
}