#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> productExceptSelf(vector<int> &arr){

    int n = arr.size();
    // vector<int> ans;
    vector<int> prefix;
    // vector<int> ans;
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] * arr[i-1];
    }
    return prefix;
}

int main (){
    vector<int> arr = {1,2,3,4};
    
    vector<int> result = productExceptSelf(arr);

    for (int x : result) {   
        cout << x << " ";
    }

    return 0;

}