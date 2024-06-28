#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        char startChar = 'A' + (n - 1 - i);
        char endChar = 'A' + (n - 1);

        for (char ch = startChar; ch <= endChar; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
