#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter a no.";
    cin >> n;

    int nst = (n*2)-1, nsp = 0;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=nsp; j++) {
            cout << " ";
        }
        for(int k=1; k<=nst; k++) {
            cout << "*";
        }
        nst-=2;
        nsp++;
        cout << endl;
    }


    return 0;
}