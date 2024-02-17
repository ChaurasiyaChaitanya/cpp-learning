#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> d;

    // add or remove element from both the end
    d.push_back(5);
    d.push_front(8);
    d.push_front(3);
    d.push_back(1);

    cout << "Before Pop : " << endl;

    for(int i : d) {
        cout << i << " ";
    }
    
    cout << endl;

    d.pop_front();

    d.pop_back();

    cout << "After Pop : " << endl;

    for(int i : d) {
        cout << i << " ";
    }

    cout << endl;

    cout << "Element at 1nd index : " << d.at(1) << endl;

    // if empty --> 1 else --> 0
    cout << "Deque is Empty or not : " << d.empty() << endl;

    cout << "First Element of Deque : " << d.front() << endl;

    cout << "Last Element of Deque : " << d.back() << endl;

    cout << "Size of Deque before erase : " << d.size() << endl;

    d.erase(d.begin(), d.begin()+1);

    cout << "Size of Deque After erase : " << d.size() << endl;

}
