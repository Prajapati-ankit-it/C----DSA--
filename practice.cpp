#include<iostream>
#include<vector>
using namespace std;


int linearSearch(vector<int>& arr, int target){    
    // int count = 0;    
    // for(int i : arr){
    //     count++;
    //     if (i == target){
    //         return count-1;
    //     }
    // }
    // return -1;
    int length = arr.size();
    for (int i = 0; i < length; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
    
}

int main (){
    vector<int> arr = {1,2,3};
    int target = 0;
    cout<<"Enter what you want to find: ";
    cin >> target;
    cout<< linearSearch(arr, target); 
}