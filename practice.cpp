#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size()-2;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]){
                return mid;
            }
            if(arr[mid] > arr[mid-1]){
                st = mid+1;
            }else if(arr[mid] < arr[mid-1]){
                end = mid-1;
            }
        }
    }

int main (){
    vector<int> arr = {1,10,2,3,4,5,6,7,8,9,};
    int result = peakIndexInMountainArray(arr);
    cout << result;

    return 0;

}