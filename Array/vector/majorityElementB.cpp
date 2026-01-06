#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElementB(vector<int> &arr){//O(n2)
    int MJ = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        int count = 1;
        for (int j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                count +=1;
            }
        }
        if (count > n/2){

            MJ = arr[i];
            return MJ;
        }
    }
    return -1;
}

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
    vector<int> arr = {1,1,2,2,2};
    cout << majorityElement(arr);

}