#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator> 
#include <numeric>

using namespace std;
using placeholders::_1;

int main() {
    // Question 1
    vector<int> v = { 5, 11, 3, 2, 12, 4, 4, 5, 9, 10, 13 };
    
    //Question 2
    cout << "Question 2:" << endl;
    cout << count(v.begin(), v.end(), 4) << endl;

    // Question 3
    cout << "Question 3:" << endl;
    cout << count_if(v.begin(), v.end(), std::bind(greater<int>(), _1, 4)) << endl;

    // Question 4
    v.erase(remove_if(v.begin(), v.end(), std::bind(less<int>(), _1, 8)), v.end());

    // Question 5
    cout << "Question 5:" << endl;
    for (int num : v) { cout << num << "\n"; }
        
    // Question 6
    vector<int> u = {};

    // Question 7
    transform(v.begin() + 1, v.end(), v.begin(), back_inserter(u), minus<int>());
    
    // Question 8
    cout << "Question 8:" << endl;
    for (int num : u) { cout << num << "\n"; }

    // Question 9
    cout << "Question 9:" << endl;
    cout << accumulate(u.begin(), u.end(), 0) << endl;
    return 0;
}