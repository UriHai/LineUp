#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Question 1
    vector<int> v = { 5, 4, 3, 2, 1, 4, 4 };
    
    //Question 2
    cout << count(v.begin(), v.end(), 4);
    return 0;
}