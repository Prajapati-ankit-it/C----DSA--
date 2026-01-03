#include<iostream>
#include<vector>
using namespace std;

void subArray(vector<int> &arr){    
    int n = arr.size();
    for (int st = 0; st < n; st++){
        for (int end = st; end< n; end++){
            for (int k = st; k <= end; k++){
                cout <<arr[k];
            }
            cout <<" ";
        }
        cout <<"\n";
    }
}

int main (){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    subArray(arr);
}