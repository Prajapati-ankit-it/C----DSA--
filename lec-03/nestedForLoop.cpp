// print n number of start in 5 line
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n: ";
    cin >> n;

    for(int  i = 1; i <= 5; i++)
    {
        for(int j = 1; j <=n; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}