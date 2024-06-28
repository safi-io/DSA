#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "enter a no.";
    cin >> n;

    for (int i = 1; i <= (n * 2 - 1); ++i) {
        for (int j = 1; j <= (n * 2 - 1); ++j) {
            int top = i - 1;
            int left = j - 1;
            int right = (n * 2 - 1) - j;
            int bottom = (n * 2 - 1) - i;
            int distance = min({top, left, right, bottom});
            cout << (n - distance) << " ";
        }
        cout << endl;
    }

    return 0;
}
