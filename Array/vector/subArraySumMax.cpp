#include<iostream>
#include<vector>
using namespace std;

int subArraySumMax(vector<int> &arr){    
    int n = arr.size();
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++){
        int currSum = 0;
        for (int end = st; end< n; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    return maxSum;
}

int main (){
    vector<int> arr = {3,-4,5,4,-1,7,-8};
    cout<< subArraySumMax(arr);
}