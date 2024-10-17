//   0 1 1 2 3 5
//   1 1 2 3 5 8 13 21 ......
//n= 1 2 3 4 5 6 7 8 
// fibo(n) = fibo(n-1) + fibo(n-2)

#include <iostream>
using namespace std;

int fibo(int n){
    if(n == 1 || n==2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter any n: ";
    cin>>n;
    cout<<fibo(n);
   
}


//simple way
// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     int t1 = 1, t2 = 1, next;

//     cout << "Fibonacci Series: " << t1 << " " << t2 << " ";

//     for (int i = 3; i <= n; ++i) {
//         next = t1 + t2;  // Next term is the sum of previous two terms
//         cout << next << " ";  // Print the next term
//         t1 = t2;  // Move t2 to t1
//         t2 = next;  // Move nextTerm to t2
//     }

//     return 0;
// }

