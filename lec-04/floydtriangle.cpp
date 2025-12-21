#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N number: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = i; j >= 0; j--) {
            cout << ch <<" "; 
            ch--;
        }
        cout << "\n";
    }
    return 0;
}

// A
// B A
// C B A
// D C B A

















// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     char ch= 'A';
//     cout << "Enter N number: ";
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = i; j >= 0; j--) {
//             cout << ch <<" "; 
//             ch++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// A
// B C
// D E F
























// floyd's triangle pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n, num=1;
//     cout << "Enter N number: ";
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = i; j >= 0; j--) {
//             cout << num <<" "; 
//             num++;
//         }
//         cout << "\n";
//     }
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
