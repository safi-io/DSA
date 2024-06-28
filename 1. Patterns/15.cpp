#include<iostream>
using namespace std;
int main() {

    int n = 5;

    int nst = n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=nst; j++) {
            cout << char(j+64);
        }
        cout << endl;
        nst--;
    }

    return 0;
}