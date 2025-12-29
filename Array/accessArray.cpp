#include <iostream>
using namespace std;

int main(){
    int size = 0;
    cout <<"Enter Array Size: ";
    cin >> size;
    cout << "\n";

    int age[size];   
    cout << "Enter Age: ";
    for (int i = 0; i < size; i++){
        cin >> age[i];
    }
    cout << "Array data: ";
    for (int i = 0; i < size; i++){
        cout << age[i]<<"\n";
    }
    
}