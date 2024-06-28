#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter a no.";
    cin >> n;

    int nst = n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=nst; j++) {
            cout << j << " ";
        }
        nst--;
        cout << endl;
    }

    return 0;
}