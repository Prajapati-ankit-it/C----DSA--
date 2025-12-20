// sum of N number which are divisible by 3 

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number for n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0){
            sum += i;
        }
    }
    cout << "Sum of n number which are divisible by 3: " << sum;
    
}