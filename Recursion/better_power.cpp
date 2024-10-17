#include<iostream>
using namespace std;

int pow(int a, int b) {
    if (b == 0) {
        return 1;  // Any number to the power of 0 is 1
    }
    else if (b % 2 == 0) {
        int h;
        h = pow(a, b / 2);  // Recursively find a^(b/2)
        return h * h;   // If power is even, multiply the result by itself
    }
    else {
        int h = pow(a, b / 2);  // Recursively find a^(b/2)
        return h * h * a;  // If power is odd, multiply by an extra 'a'
    }
}

int main() {
    int a, b;
    cout << "Enter the Base: ";
    cin >> a;
    cout << "Enter the Power: ";
    cin >> b;
    cout << pow(a, b) << endl;  // Call the recursive power function
    return 0;
}
