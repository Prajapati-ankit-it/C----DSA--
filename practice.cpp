#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> productExceptSelf(vector<int> &arr){

    int n = arr.size();
    vector<int> ans(n,1);
    // vector<int> sufix(n,1);
    int sufix = 1;
    for(int i = 1; i < n; i++){
        ans[i] = ans[i-1] * arr[i-1];
    }
    for (int i = n-2; i >= 0; i--){
        sufix *= arr[i+1]; 
        ans[i] *= sufix;
    }
    // for (int i = 0; i < n; i++){
    //     ans[i] = sufix[i] * ans[i];
    // }
    
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