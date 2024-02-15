#include <iostream>
#include <stack>
using namespace std;

int main() {

    // Last in First out
    stack<string> s;

    s.push("C++");
    s.push("DSA");
    s.push("CP");
    s.push("Learning");

    cout << "Top Element : " << s.top() << endl;

    s.pop();

    cout << "Top Element after Pop : " << s.top() << endl;

    cout << "Size of Stack : " << s.size() << endl;

    // if empty --> 1 else --> 0
    cout << "Stack is Empty or not : " << s.empty() << endl;


}
