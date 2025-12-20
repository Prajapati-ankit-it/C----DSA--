// find characters lowercase and uppercase
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // if (ch >= 'a' && ch <= 'z'){
    //     cout << ch << " is a lowercase Letter." << endl;
    // } else {
    //     cout << ch << " is an uppercase Letter." << endl;
    // }

    if (ch >= 97 && ch <= 122){
        cout << ch << " is a lowercase Letter." << endl;
    }else{
        cout << ch << " is an uppercase Letter." << endl;
    }

    // int asciiValue = ch;
    // cout << "The ASCII value of " << ch << " is " << asciiValue << endl;
}