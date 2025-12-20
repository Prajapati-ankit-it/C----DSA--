// find odd number till n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(i % 2 != 0 ){
            cout << "odd: "<< i << "\n";
            sum += i;
        }
        //  else{
        //     cout << "even: " << i<< "\n";
        // }
    }
    cout << "Sum of odd number: " << sum;

    return 0;
}