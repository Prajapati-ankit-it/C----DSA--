//WAF to print all the unique value in an array

#include <iostream>
using namespace std;
int SIZE = 0;

void uniqueArray(int arr[]){
    for(int i = 0; i < SIZE; i++){
        int count = 0;
        for (int j = 0; j < SIZE; j++){
            if (arr[i] == arr[j]){
               count++;
            }
        }
        if (count == 1){
            cout << "Unique Value: "<< arr[i] << "\n";
        }
    }
}

int main(){
    int target;
    cout <<"Enter Array Size: ";
    cin >> SIZE;
    cout << "\n";

    int arr[SIZE];   
    cout << "Enter Age: ";
    for (int i = 0; i < SIZE; i++){
        cin >> arr[i];
    }
    uniqueArray(arr);
    
}