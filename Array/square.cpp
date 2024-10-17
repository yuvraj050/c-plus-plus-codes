#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Declare an array to store the squares of numbers from 1 to n
    int arr[n];

    // Loop to calculate squares and store in the array
    for (int i = 1; i <= n; i++) {
        arr[i-1] = i * i;  // Store the square of i in the array
    }

    // Print the array elements
    cout << "Squares of numbers from 1 to " << n << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // cout<<arr[n-1];
}
