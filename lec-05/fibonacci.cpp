//function parameter

#include <iostream>
using namespace std;

int fibonacci(int n){
    int New = 0, previous = 1, beforePrevious = 0; 
    if (n == 0){
        return beforePrevious;
    }
    if (n != 1){
        for (int i = 1; i < n; i++){
            New = previous + beforePrevious;
            beforePrevious = previous;
            previous = New;
        }
    }
    return previous;
}

int main (){
    int n;
    cout << "Enter Value for Fibonacci: ";
    cin >> n;
    cout << "Fibonacii: "<< fibonacci(n);
    
}