#include<iostream>
using namespace std;
int main() {
    
    int n; cout << "enter a no."; cin >> n;
    int nsp = 0;

    for(int i=1; i<=n; i++) {
        for(int j=n; j>=i; j--) {
            cout << "*";
        }
        for(int k=1; k<=nsp; k++) {
            cout << " ";
        }
        for(int k=n; k>=i; k--) {
            cout << "*";
        }
        nsp+=2;
        cout << endl;
    }

    nsp = (n*2)-2;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        for(int k=1; k<=nsp; k++) {
            cout << " ";
        }
        for(int k=1; k<=i; k++) {
            cout << "*";
        }
        nsp-=2;
        cout << endl;
    }

    return 0;
}