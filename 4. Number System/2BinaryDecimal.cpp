#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n = 110;
    int i = 0;
    int ans = 0;

    while( n!=0 ) {
        int digit = n % 10;
        if(digit==1) {
            ans = pow(2,i) + ans;
        }
        n/=10;
        i++;
    }

    cout << ans;

    return 0;
}