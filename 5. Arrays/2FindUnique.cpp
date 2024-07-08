#include<iostream>
using namespace std;

// Worst Appraoch
void findUnique(int arr[], int size) {

    bool secArr[size] = {true};

    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] == arr [j]) {
                int temp = arr[i];
                arr[i] = arr[i] ^ arr[j];
                arr[j] = temp ^ arr[j];
            }
        }
    }

    for(int i=0; i<size; i++) {
        if(arr[i]!=0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Optimal Approach

void findUnique2(int arr[], int size) {
    int ans = 0;

    for(int i=0; i<size; i++) {
        ans = ans^arr[i]; // if we XOR same terms, they give zero, and zero xor anything return anything.
    }

    cout << ans;
}

int main() {
    int arr[] = {10,69,15,20,10,20,15};

    int size = sizeof(arr) / sizeof(arr[0]);
    findUnique(arr, size);
    findUnique2(arr, size);

    return 0;
}