//function parameter

#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

void minimum(int a, int b){
    if (a > b){
        cout << "A is bigger!";
    }else{
        cout << "B is bigger!";
    }
    
}

void sumN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout <<"Sum of "<< n << " number: "<<sum;
}

void sumD(int n){
    int digitSum = 0, lastDigit = 0;

    while (n > 0){
        lastDigit = n % 10;
        n = n / 10;
        digitSum += lastDigit; 
    }
    cout << "Sum of digits of a number: "<< digitSum;

}

int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
    
}

int nCr(int n, int r){
    int nrFactorial = 0, nF, rF, nmrF;

    nF = factorial(n);
    rF = factorial(r);
    nmrF = factorial(n-r);

    return nF/(rF * nmrF);
}
int main (){
    int n,r;
    cout << "Enter Value N and R for calculate nCr: ";
    cin >> n >> r;
    cout << nCr(n, r);
    // cout << "sum: "<<sum(a,b) << "\n";
    // cout << "bigger: ";
    // minimum(a,b);
    // cout<<"\n";
    // sumN(n);
    // cout<<"\n";
    // cout << "Sum of "<< n <<" digit: ";
    // sumD(n);

}