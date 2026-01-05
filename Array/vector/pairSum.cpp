#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> &arr, int target){
    int n = arr.size();
    vector<int> ans;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main (){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector<int> result = pairSum(arr,target);
    for (int idx : result) {
        cout << idx << " ";
    }
}