#include<iostream>
using namespace std;
int main() {

    int n;
    cout << "enter a no.";
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            ((j%2==0) ? cout << 0 : cout << 1) << " ";
        }
        cout << endl;
    }

    return 0;
}