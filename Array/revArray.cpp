#include <iostream>
using namespace std;
int SIZE = 0;

void revArray(int age[]){
    int start = 0, end = SIZE-1;
    while(start < end){
        swap(age[start],age[end]);
        start++; 
        end--;
   }
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
    revArray(age);

    cout << "Array data: ";
    for (int i = 0; i < SIZE; i++){
        cout << age[i]<<"\n";
    }
    
    
}