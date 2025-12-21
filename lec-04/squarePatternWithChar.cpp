// square pattern easy with number n
#include <iostream>
using namespace std;

int main (){
    char n;
    cout << "Enter N char for print pattern: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        char ch = 'A';
        for (int j = 0;  j < n; j++){
            cout << ch;
            ch += 1;
        }
        cout << "\n";
    }
    return 0;
}