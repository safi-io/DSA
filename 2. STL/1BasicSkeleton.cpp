#include<bits/stdc++.h> // Can be used to import all libraries
using namespace std; // Is used to avoid std:: in every cout and cin statement

void printData() { // This function doesn't return anything
    cout << "I am from print data";
}

int main() { 
    // Int func must return int value, but in main func, compiler implicitly returns.
    printData();
    return 0; // Explicit Return
}