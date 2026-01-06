#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &arr){//O(nlogn)

    int n = arr.size();
    sort(arr.begin(), arr.end());
    
    int frequency = 1;
    for (int i = 1; i < n; i++){
        if (arr[i] == arr[i-1]){
            frequency +=1;
        }else{
            frequency = 1;
        }
        if (frequency > n/2){
            return arr[i];
        }
    }
    return -1;
}

int main (){
    vector<int> arr = {1,2,1,2,2};
    cout << majorityElement(arr);

}