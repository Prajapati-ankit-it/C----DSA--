//WAF to find sum and product of all numbers in given Array;

#include <iostream>
using namespace std;
int SIZE = 0;

void sumProductArray(int age[]){

    int sum = 0, product = 1;
    for (int i = 0; i < SIZE; i++){
        sum += age[i];
        product *= age[i];
    }
    cout <<"Sum of all element in Array: "<<sum <<"\n";
    cout<<"Product of all element in Array: "<< product;
}

int main(){
    int target;
    cout <<"Enter Array Size: ";
    cin >> SIZE;
    cout << "\n";

    int age[SIZE];   
    cout << "Enter Age: ";
    for (int i = 0; i < SIZE; i++){
        cin >> age[i];
    }
    sumProductArray(age);
    
}