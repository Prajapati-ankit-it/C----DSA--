#include <iostream>
using namespace std;
int SIZE = 0;

int LinearSearch(int age[],int target_V){
   for (int i = 0; i < SIZE; i++){
        if (age[i] == target_V){
            return i; 
        }
   }
   return -1;
   
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
    cout << "Array data: ";
    for (int i = 0; i < SIZE; i++){
        cout << age[i]<<"\n";
    }
    cout <<"Enter Target Value for Search: ";
    cin >> target;
    cout << "Seached INDEX: "<<LinearSearch(age, target);
    
    
}