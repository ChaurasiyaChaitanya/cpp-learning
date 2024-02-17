#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Vector in STL : vector<type>
    vector<int> v;

    // initialize the vector of size 5 by 1
    vector<int> v1(5, 1);

    cout << "Vector v1 : " << endl;

    for (int i : v1) {
        cout << i << " ";
    } 

     cout << endl;

    // copy vector
    vector<int> cv(5, 1);

    cout << "Copied Vector cv : " << endl;

    for (int i : cv) {
        cout << i << " ";
    } 


    cout << endl;

    // increases by itself to 2 times when capacity reaches
    v.push_back(4);
    cout << "Capacity of Vector after first element : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity of Vector after second element : " << v.capacity() << endl;

    v.push_back(9);
    cout << "Capacity of Vector after third element : " << v.capacity() << endl;

    cout << "Element at 2nd index : " << v.at(2) << endl;

    // if empty --> 1 else --> 0
    cout << "Vector is Empty or not : " << v.empty() << endl;

    cout << "First Element of Vector : " << v.front() << endl;

    cout << "Last Element of Vector : " << v.back() << endl;

    cout << "Before Pop Back : " << endl;

    for(int i : v) {
        cout << i << endl;
    }

    cout << endl;

    // remove element from end
    v.pop_back();

    cout << "After Pop Back : " << endl;

    for(int i : v) {
        cout << i << endl;
    }

    // size of vector
    cout << "Size of Vector : " << v.size() << endl;

    // clear a vector
    v.clear();

    cout << "Size of Vector after clear: " << v.size() << endl;

}
