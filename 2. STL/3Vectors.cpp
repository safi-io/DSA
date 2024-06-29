#include<bits/stdc++.h>
using namespace std;

void learnVector() {
    vector<int> v;

    v.push_back(16);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.emplace_back(69); // A little bit faster than push back and also diff in syntax while handling pairs.

    vector<int> v1(v); // Vector is being copied

    // Iterators

    vector<int>::iterator it = v.begin();
    it++;
    // cout << *(it);

    // Printing Through Iterators

    for(auto it : v) { // auto will get data type by itself.
        cout << it << " ";
    }

    // Deletion
    v.erase(v.begin(), v.begin()+2);
    cout << endl;

    // Printing Through Iterators

    for(auto it=v.begin(); it!=v.end(); it++) { // auto will get data type by itself.
        cout << *(it) << " ";
    }
    cout << endl;

    v.pop_back(); // Pops up last element
    // .swap() can be used to swap vectors
    // .clear() can be used to clear the whole vector
    cout << v.size(); // Prints Size
}

int main() {
    learnVector();
    return 0;
}