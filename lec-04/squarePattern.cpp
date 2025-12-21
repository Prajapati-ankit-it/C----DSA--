// square pattern easy with number n
#include <iostream>
using namespace std;

int main (){
    int n; 
    char ch = 'A';
    cout << "Enter N number for print pattern: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for (int  j = 0;  j < n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
    cout << "Last char value after exit loop: " << ch;
    return 0;
}