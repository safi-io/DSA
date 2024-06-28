#include<iostream>
using namespace std;
int main() {

    int n;
    cout << "enter a no.";
    cin >> n;
    
    int nsp = (n*2)-2;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        for(int k=1; k<=nsp; k++) {
            cout << " ";
        }
        for(int l=1; l<=i; l++) {
            cout << l;
        }
        nsp-=2;
        cout << endl;
    }


    return 0;
}