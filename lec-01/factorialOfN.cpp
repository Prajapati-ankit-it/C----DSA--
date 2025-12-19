// calculate factorail number of n
#include <iostream>
using namespace std;

int main(){
    int n, factorial = 1, i;
    cout << "Enter a number n: ";
    cin >> n;

    for(i =1; i<= n; i++){
        factorial = factorial * i;
    }
    cout << "factorial of " << n << "is :" << factorial << endl;
    return 0;

}