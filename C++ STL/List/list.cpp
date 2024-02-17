#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> l;
    
    // initialize the list of size 5 by 10
    list<int> l1(5, 10);

    cout << "List l1 : " << endl;

    for(int i : l1) {
        cout << i << " ";
    }
    
    cout << endl;

    // add or remove element from both the end
    l.push_back(1);
    l.push_front(3);
    l.push_front(5);
    l.push_back(7);

    cout << "Before erase : " << endl;

    for(int i : l) {
        cout << i << " ";
    }
    
    cout << endl;

    // erase element from front
    l.erase(l.begin());

    cout << "After erase : " << endl;

    for(int i : l) {
        cout << i << " ";
    }

    cout << endl;

    cout << "Size of List : " << l.size() << endl;

}
