//function parameter

#include <iostream>
using namespace std;

void primeNumber(int n){
    
    bool isPrime = true;

    for(int i = 2; i < n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << "Prime +_+";
    }else{
        cout << "not prime number";
    }
    
}

void primeNumberTillN(int n){

    for(int i = 2; i < n; i++){
        bool isPrime = true;

        for (int j = 2; j < i; j++){
            if (i % 2 == 0){
                isPrime = false;
            }
            
        }

        if (isPrime == true){
            cout << i <<"is Prime Number\n";
        }
        
    }
    
}

int main (){
    int n;
    cout << "Enter Value N and R for calculate nCr: ";
    cin >> n;

    // cout << "Number is: ";
    primeNumberTillN(n);
}