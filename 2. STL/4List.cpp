#include<bits/stdc++.h>
using namespace std;

void learnList() {
    list<int> numbers = {1,2,3,4,5};
    numbers.push_front(14);

    cout << "List Elements: ";
    for(auto number : numbers) {
        cout << number <<", ";
    }

}

int main() {
    learnList();
    return 0;
}