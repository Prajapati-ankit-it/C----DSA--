#include <iostream>
using namespace std;
int SIZE = 0;

void arrayCom(int age[]){
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < SIZE; i++){
        smallest = min(age[i],smallest);
        largest = max(age[i],largest);
    }
    for (int i = 0; i < SIZE; i++){
        if (smallest == age[i]){
            cout <<"Smallest Element INDEX: "<< i <<"\n";
        }
        if (largest == age[i]){
            cout <<"Largest Element INDEX: "<<i;
        }
    }
    
    // return 0;
}
int main(){
    
    cout <<"Enter Array Size: ";
    cin >> SIZE;
    cout << "\n";

    int age[SIZE];   
    cout << "Enter Age: ";
    for (int i = 0; i < SIZE; i++){
        cin >> age[i];
    }
    cout << "Array data: ";
    for (int i = 0; i < SIZE; i++){
        cout << age[i]<<"\n";
    }

    cout << "Smallest Element from Array: "; 
    arrayCom(age);
    
    
}