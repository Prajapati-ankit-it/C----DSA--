#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majorityElementMoorseV(vector<int> &arr){//O(1)

    int n = arr.size();
    
    int frequency = 0;
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (frequency == 0){
            ans = arr[i];
        }
        if ( ans == arr[i]){
            frequency++;
        }else{
            frequency--;
        }
    }
    int count = 0;
    for(int n : arr){
        if (n == ans){
            count++;
        }
    }
    if (count > n/2){
        return ans;
    }else{
        return -1;
    }
    return ans;
}

int main (){
    vector<int> arr = {1,2,2,1};
    cout << majorityElementMoorseV(arr);

}