#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> &arr, int target){
    int n = arr.size();
    vector<int> ans;
    int i = 0, j = n-1;
    int pairSum = 0;
    
    while (i < j){
        pairSum = arr[i] + arr[j];
        if (pairSum < target){
            i++;
        }else if (pairSum > target){
            j--;   
        }else if (pairSum == target){
            ans.push_back(i);
            ans.push_back(j);

            return ans;
        }
    }
    return ans;
}

int main (){
    vector<int> arr = {2,7,11,15};
    int target = 26;
    vector<int> result = pairSum(arr,target);
    for (int idx : result) {
        cout << idx << " ";
    }
}