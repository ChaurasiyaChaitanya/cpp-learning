#include <iostream>
#include <queue>
using namespace std;

int main() {

    // First in First out
    queue<string> q;

    q.push("C++");
    q.push("DSA");
    q.push("CP");
    q.push("Learning");

    cout << "Size of Queue : " << q.size() << endl;

    cout << "First Element of Queue : " << q.front() << endl;

    q.pop();

    cout << "First Element after Pop : " << q.front() << endl;

    cout << "Last Element of Queue: " << q.back() << endl;

    cout << "Size of Queue after Pop: " << q.size() << endl;

    // if empty --> 1 else --> 0
    cout << "Queue is Empty or not : " << q.empty() << endl;


}
