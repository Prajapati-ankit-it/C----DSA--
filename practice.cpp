//WAF to swap the max & min number of an array

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int SIZE = 0;

void maxMinSwapArray(int arr[]){
    int smallest = INT_MAX, largest = INT_MIN, smallest_I = 0, largest_I = 0;
    for (int i = 0; i < SIZE; i++){
        largest = max(arr[i],largest);
        smallest = min(arr[i],smallest);
    }

    for (int i = 0; i < SIZE; i++){
        if(smallest == arr[i]){
            smallest_I = i;
        }
        if (largest == arr[i]){
            largest_I = i;
        }
    }
    swap(arr[smallest_I], arr[largest_I]);
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
    maxMinSwapArray(arr);

        for (int i = 0; i < SIZE; i++){
        cout << arr[i] <<"\n";
    }
    
}