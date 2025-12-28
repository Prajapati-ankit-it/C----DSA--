#include <iostream>
using namespace std;

int decimalToBinary(int number){
    
    int rem, power, ans;
    power = 1;

    while (number > 0){
        rem = number%2;
        number /= 2;

        ans += (rem * power);
        power *= 10; 
    }
    return ans;

}

int main(){
    int n;
    cout <<"Enter N number in decimal for convert in binary: ";
    cin >> n;

    cout << decimalToBinary(n);

}