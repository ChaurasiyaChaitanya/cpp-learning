#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);

    // Binary search to find the element
    cout << "Finding element 8 : " << binary_search(v.begin(), v.end(), 8) << endl;

    cout << "Finding element 6 : " << binary_search(v.begin(), v.end(), 6) << endl;

    // Lower bound
    cout << "Lower Bound : " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    // Upper bound
    cout << "Upper Bound : " << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;

    int a = 5;
    int b = 7;

    // Max element
    cout << "Max : " << max(a,b) << endl;

    // Min element
    cout << "Min : " << min(a,b) << endl;

    // Swap a and b
    swap(a, b);
    cout << "a : " << a << endl;
    
    cout << "b : " << b << endl;

    // Reverse a String
    string s = "dsalearning";

    reverse(s.begin(), s.end());

    cout << "Reverse String : " << s << endl;

    // Rotate a vector
    rotate(v.begin(), v.begin()+1, v.end());

    cout << "After rotate : " << endl;

    for(int i : v) {
        cout << i << " ";
    } 

    cout << endl;

    // Sort a vector
    sort(v.begin(), v.end());

    cout << "After Sort : " << endl;

    for(int i : v) {
        cout << i << " ";
    } 
}