#include <iostream>
#include <array>
using namespace std;

int main() {

    // Basic Array
    int ar[5] = {1,2,3,4,5};

    // Array in STL :- array<type, size>
    array<int, 4> arr = {2, 5, 7, 9};

    int size = arr.size();

    for(int i=0; i<size; i++) {
        cout << arr[i] << endl;
    }

    cout << "Element at 2nd index : " << arr.at(2) << endl;

    // if empty --> 1 else --> 0
    cout << "Array is Empty or not : " << arr.empty() << endl;

    cout << "First Element of Array : " << arr.front() << endl;

    cout << "Last Element of Array : " << arr.back() << endl;

}
