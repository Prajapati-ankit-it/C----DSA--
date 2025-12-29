#include <iostream>
using namespace std;

int revNum (int num){
    int rev = 0;
    while (num > 0){
        int digit = num % 10;
        rev  = rev * 10 + digit;
        num = num / 10;

    }

    return rev; 

}

int main(){
    int n;
    cout <<"Enter N number for check they are 2's power or not: ";
    cin >> n;
    
    cout << revNum(n);
}