#include<iostream>
using namespace std;
int main() {
    int n = 5;

    int nsp = (n*2) - 2;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        for(int k=1; k<=nsp; k++) {
            cout << " ";
        }
        for(int l=1; l<=i; l++) {
            cout << "*";
        }

        nsp-=2;
        cout << endl;
    }

    int nst = n-1;
    nsp = 2;

    for(int i=1; i<n; i++) {
        for(int j=1; j<=nst; j++) {
            cout << "*";
        }
        for(int k=1; k<=nsp; k++) {
            cout << " ";
        }
        for(int l=1; l<=nst; l++) {
            cout << "*";
        }

        nst--;
        nsp+=2;
        cout << endl;
    }




    return 0;
}