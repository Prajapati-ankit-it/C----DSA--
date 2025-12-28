#include <iostream>
using namespace std;

int powerOfTwo (int num){

    bool power = false;

    if (num <= 0){

        return power;
    
    }else{
        while (num > 1){
            if (num % 2 != 0){
                break;
            }else{
                num /= 2;
            }
        }
        if (num == 1){
            return power = true;
        }
        
    }
    return power;
}

int powerOfTwoWithRightShift (int num){

    return (num > 0) && (num & (num-1)) == 0; 

}

int main(){
    int n;
    cout <<"Enter N number for check they are 2's power or not: ";
    cin >> n;
    
    cout << powerOfTwoWithRightShift(n);
}