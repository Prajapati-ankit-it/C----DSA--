// print factorial of a number N
#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    cout << "Enter number N for find factorial: ";
    cin >> n;

    for(int i = 1; i < n; i++){
        factorial *= i+1;
    }
    cout << "factorial of " << n << " is: " << factorial;

    return 0;
}