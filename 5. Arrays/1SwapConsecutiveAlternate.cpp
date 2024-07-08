#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size) {


    for(int i=0; i<size; i+=2) {
            if(i + 1 < size) {
                if( arr[i] + 1 == arr[i + 1] ) {
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp; 
                }
            }
    }

    // Printing
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int size = sizeof(arr) / sizeof(arr[0]);
    swapAlternate(arr, size);

    return 0;
}
