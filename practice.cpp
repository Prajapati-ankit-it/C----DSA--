#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);

    cout<<"capacity: "<<vec.capacity();
    return 0;
}