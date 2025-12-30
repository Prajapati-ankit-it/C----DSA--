//WAF to print intersection of 2 array

#include <iostream>
using namespace std;

void intersectionArray(int arr1[], int arr2[], int SIZE1, int SIZE2){

    for(int i = 0; i < SIZE1; i++){

       for (int j = 0; j < SIZE2; j++){

            if (arr1[i] == arr2[j]){

                int count = 0;
                for (int k = 0; k < i; k++){

                    if (arr1[i] == arr1[k]){
                        count++;
                    }
                }
                for (int k = 0; k < j; k++){

                    if (arr2[j] == arr2[k]){
                        count++;
                    }
                }
                if (count == 0){
                    cout << "Intersection of given Array: "<<arr1[i]<<"\n";
                    break; 
                }
            }
        }
    }
}

int main(){
    int SIZE1 = 0, SIZE2 = 0;
    cout <<"Enter Array1 Size: ";
    cin >> SIZE1;
    cout << "\n";

    int arr1[SIZE1];   
    cout << "Enter Array1: ";
    for (int i = 0; i < SIZE1; i++){
        cin >> arr1[i];
    }

    cout <<"Enter Array2 Size: ";
    cin >> SIZE2;
    cout << "\n";
    int arr2[SIZE2];

    cout << "Enter Array2: ";
    for (int i = 0; i < SIZE2; i++){
        cin >> arr2[i];
    }
    
    intersectionArray(arr1,arr2,SIZE1,SIZE2);
    
}