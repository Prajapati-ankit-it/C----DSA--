#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter N number: ";
    cin >> n;
    
    char ch = 64 + 1;
    for(int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        ch++;
        cout << "\n";
    }
    return 0;
}