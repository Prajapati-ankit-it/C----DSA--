#include <iostream>
using namespace std;

int decimalToBinary(int decimalNumber){
    
    int power, ans = 0;
    power = 1;

    while (decimalNumber > 0){
        int rem = decimalNumber%2;
        decimalNumber /= 2;

        ans += (rem * power);
        power *= 10; 
    }
    return ans;

}

int binaryToDecimal(int binaryNumber){
    int pow = 1, ans = 0;

    while (binaryNumber > 0){
        int rem = binaryNumber % 10;
        ans += rem * pow;

        binaryNumber /= 10;
        pow *= 2;

    }
    return ans; 
    
}


int main(){
    int n;
    cout <<"Enter N number in binary for convert in decimal: ";
    cin >> n;

    cout << binaryToDecimal(n);

}