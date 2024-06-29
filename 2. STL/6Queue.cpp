#include<bits/stdc++.h>
using namespace std;

void learnQueue() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    cout << q.back() << endl; // 7
    cout << q.front() << endl; // 1
    q.pop(); // 1 will be out as FIFO

    while (!q.empty()) {
        cout << '\t' << q.front();
        q.pop();
    }
}


int main() {
    // Works on First In, First Out
    learnQueue();
    return 0;
}