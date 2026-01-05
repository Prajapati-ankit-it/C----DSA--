#include<iostream>
#include<vector>
using namespace std;

int subArraySumMax(vector<int> &arr){
    int maxSum = INT_MIN, sum = 0;
    for (int n : arr){
        sum += n;
        maxSum = max(sum, maxSum);
        if (sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}

int main (){
    vector<int> arr = {3,-4,5,4,-1,7,-8};
    cout<< subArraySumMax(arr);
}