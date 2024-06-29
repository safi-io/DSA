#include<utility>
#include<iostream>
using namespace std;

void pairs() {
    pair<int, int> p = {1,3}; // Only Two Values of any data types

    pair<int, pair<int,int>> p2 = {1, {6,9}}; // Nested Pairs

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}}; // Pair Array

    cout << arr[2].second;
}

int main() {


    // Pairs in C++ are containers that allow us to store two values as a single element. The values may or may not be of the same data type. Pairs store values as {first, second}, the order of values is fixed.

    pairs();
    return 0;
}