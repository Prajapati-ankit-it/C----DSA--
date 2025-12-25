// practice code (revision)

#include <iostream>
using namespace std;

int main (){
    int n;
    //  num = 1;

    cout <<"Enter N number: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout <<"*";
        }
        if (i != n){
            for (int j = 0; j < (2*(n-i)-2); j++){
                cout <<" ";
            }
        }   
        for (int j = 0; j < i+1; j++){
            cout <<"*";
        }
        cout<<"\n";
    }
    for (int i = n-1; i >= 0; i--){
        for (int j = i; j >= 0; j--){
            cout <<"*";
        }
        for (int j = 0; j < (2*(n-i)-2); j++){
            cout <<" ";
        }
        for (int j = i; j >= 0; j--){
            cout <<"*";
        }
        cout <<"\n";
    }
    
    
    return 0;
}