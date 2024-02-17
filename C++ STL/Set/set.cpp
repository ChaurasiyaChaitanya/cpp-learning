#include <iostream>
#include <set>
using namespace std;

int main() {

    // Set : No duplicate - sorted order
    set<int> s;

    s.insert(1);
    s.insert(0);
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(6);

    for(int i : s) {
        cout << i << " ";
    }

    cout << endl;

    // remove first element
    s.erase(s.begin());

    for(int i : s) {
        cout << i << " ";
    }

    cout << endl;

    // iteartor to remove 2nd element
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i : s) {
        cout << i << " ";
    }

    cout << endl;

    cout << "Element 5 is present or not : " << s.count(5) << endl;

    cout << "Element 0 is present or not : " << s.count(0) << endl;


    // Iterator to get reference of the element using find method
    set<int>::iterator itr = s.find(5);

    for(auto it=itr; it!=s.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
}
