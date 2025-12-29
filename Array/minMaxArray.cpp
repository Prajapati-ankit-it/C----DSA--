#include <iostream>
using namespace std;
int SIZE = 0;

int arrayCom(int age[]){
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < SIZE; i++){
        smallest = min(age[i],smallest);
        largest = max(age[i],largest);
        
    }
    return  largest;
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

    cout << "Smallest Element from Array: "<< arrayCom(age);
    
    
}