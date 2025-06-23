#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator> 

using namespace std;
using placeholders::_1;

int main() {
    // Question 1
    vector<int> v = { 5, 11, 3, 2, 12, 4, 4, 5, 9, 10 };
    
    //Question 2
    cout << count(v.begin(), v.end(), 4) << endl;

    // Question 3
    cout << count_if(v.begin(), v.end(), std::bind(greater<int>(), _1, 4)) << endl;

    // Question 4
    remove_if(v.begin(), v.end(), std::bind(less<int>(), _1, 8));
    for (int num : v) { cout << num << " "; }
    cout << endl;
    v.erase(remove_if(v.begin(), v.end(), std::bind(less<int>(), _1, 8)), v.end());

    // Question 5
    for (int num : v) { cout << num << " "; }
    
    // Question 6
    vector<int> u = {};

    // Question 7

    return 0;
}