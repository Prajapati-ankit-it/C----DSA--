// inverted triangle pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N number: ";
    cin >> n;
    char ch = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        for(int k = 0; k < n - i; k++) {
            cout << ch;            
        }
        ch++;
        cout << "\n";
    }
    return 0;
}

// 1 1 1 1
//   2 2 2
//     3 3
//       4