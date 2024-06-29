#include<bits/stdc++.h>
using namespace std;

void learnStack() {
    // Last In, First Out
    stack<int> sk;
    sk.push(15);
    sk.push(100);

    sk.pop();

    cout << sk.top();
}

int main() {

    learnStack();
    return 0;
}