#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> productExceptSelf(vector<int> &arr){//O(1)

    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int product = 1;
        for (int j = 0; j < n; j++){
            if (i != j){
                product *= arr[j];
            }
        }
        ans.push_back(product);
    }

    return ans;
}

int main (){
    vector<int> arr = {1,2,3,4};
    
    vector<int> result = productExceptSelf(arr);

    for (int x : result) {   
        cout << x << " ";
    }

    return 0;

}