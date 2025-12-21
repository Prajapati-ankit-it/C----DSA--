#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N number: ";
    cin >> n;
    // n = 3;
    for(int i = 0; i < n; i++){
        // int rev = i;
        for(int j = i+1; j > 0; j--){
            cout << j <<" ";
            // rev--;
        }
        cout << "\n";
    }
    return 0;
}

// 1
// 21
// 321
// 4321






















// easy with number;
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter N number: ";
//     cin >> n;
    
//     for(int i = 0; i < n; i++){
//         // int num = 1;
//         for(int j = 1; j <= i+1; j++){
//             cout << j <<" ";
//             // num++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// 1
// 12
// 123
// 1234