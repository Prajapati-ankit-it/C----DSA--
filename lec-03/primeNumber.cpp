// find the prime number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i*i <= n; i++)
    {
        if( n % i == 0){
            isPrime = false;
            break;
        } 
    }
    if (isPrime == false){
        cout << "non Prime number";
    } else{
        cout << "prime number";
    }
    return 0;

}