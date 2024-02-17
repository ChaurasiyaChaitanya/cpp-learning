#include <iostream>
#include <queue>
using namespace std;

int main() {

    // max heap : give max element first
    priority_queue<int> max_heap;

    // min heap : give min element first
    priority_queue<int, vector<int>, greater<int>> min_heap;

    max_heap.push(2);
    max_heap.push(5);
    max_heap.push(1);
    max_heap.push(4);
    max_heap.push(3);

    int size = max_heap.size();

    cout << "Max Heap : " << endl;

    for(int i=0; i<size; i++) {
        cout << max_heap.top() << " ";
        max_heap.pop();
    }

    cout << endl;

    cout << "Min Heap : " << endl;

    min_heap.push(2);
    min_heap.push(5);
    min_heap.push(1);
    min_heap.push(4);
    min_heap.push(3);

    int size1 = min_heap.size();

    for(int i=0; i<size1; i++) {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }

    cout << endl;

    // if empty --> 1 else --> 0
    cout << "Heap is Empty or not : " << min_heap.empty() << endl;
}
