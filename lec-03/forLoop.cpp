#include <iostream>
using namespace std;

int main() {
    int sum = 0, n;
    cout << "Enter number of n: ";
    cin >> n;
    for(int i = 1; i <= n; i++ ){
        sum += i;

    }
    cout << "sum: " << sum << endl;

    return 0;
}