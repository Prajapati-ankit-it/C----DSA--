#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N number: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n-i-1 ; j++){
            cout << " ";
        }
        // int num = 1;
        for (int k = 1; k <= i+1; k++){
            cout << k;
            // num++;
        }
        for (int j = i; j > 0; j--){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
//     1
//    12
//   123 
//  1234


// * * * *
// * * *
// * *
// *

// 1111
// 222
// 33
// 4



//       1 
//     1 2 1 
//   1 2 3 2 1 
//  1 2 3 4 3 2 1