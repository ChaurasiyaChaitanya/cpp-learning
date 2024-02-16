#include <iostream>
#include <map>
using namespace std;

int main() {

    // Map : Key-Value pair
    map<int, string> m;

    m[1] = "C++";
    m[2] = "DSA";
    m[7] = "CP";
    m[10] = "Learning";

    m.insert({5, "OOP"});

    // print key value pair 
    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Key 2 is present or not : " << m.count(2) << endl;

    cout << "Key 0 is present or not : " << m.count(0) << endl;

    m.erase(7);

    cout << "After erase : " << endl;

    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    // Iterator to get reference of the element using find method
    auto it = m.find(2);

    for(auto i=it; i!=m.end(); i++) {
        cout << (*i).first << " " << (*i).second << endl; 
    }



}