#include <iostream>
using namespace std;

int powerOfTwoWithRightShift (int num){

    return (num > 0) && (num & (num-1)) == 0; 

}

int main(){
    int n;
    cout <<"Enter N number for check they are 2's power or not: ";
    cin >> n;
    
    cout << powerOfTwoWithRightShift(n);
}