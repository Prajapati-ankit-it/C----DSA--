#include<iostream>
#include<vector>
using namespace std;


void reverseVector(vector<int> &arr){    
    int length = arr.size(), start = 0 , end = length - 1 ;
    
    for (int i = 0; i < length ; i++){
        if (start < end && start != end){
            swap(arr[start], arr[end]);
            start++;
            end--; 
        }else{
            return;
        }       
    }
}

int main (){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    reverseVector(arr);
    for (int i : arr){
        cout <<i<<"\n";
    }
}