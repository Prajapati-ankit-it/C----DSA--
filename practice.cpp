// practice code (revision)

#include <iostream>
using namespace std;

int main (){
    int n;
    //  num = 1;

    cout <<"Enter N number: ";
    cin >> n;

    for (int i = 0; i < n ; i++){
        //space
        for (int j = 0; j < n-i-1; j++){
            cout <<" "; 
        }
        int num = 1;
        for (int j = 0; j < i+1; j++){
            cout << num;
            num++;
        }
        if (i !=0 ){
            for (int j = i; j > 0; j--){
                cout << j;
            }
        }
        cout <<"\n";
    }
    return 0;
}