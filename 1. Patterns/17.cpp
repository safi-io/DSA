#include<iostream>
using namespace std;
int main() {
    int n; cout << "enter a no."; cin >> n;
    int nsp = n-1, nst = 1;

    for(int i=1; i<=n; i++) {
        char ch = 'A';

        for(int j=1; j<=nsp; j++) {
            cout << " ";
        }

        for(int j=1; j<=nst; j++) {
            if( j <= (nst/2) ) {
                cout << ch;
                ch++;
            }
            else {
                cout << ch;
                ch--;
            }
        }

        nsp--;
        nst+=2;
        cout << endl;
    }

    return 0;
}