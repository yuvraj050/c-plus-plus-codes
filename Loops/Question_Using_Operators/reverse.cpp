#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int rev = 0;
    while(n!=0){
        int ld = n%10; // last digit nikalo
        rev = rev*10;
        rev = rev+ld;
        n = n/10; // last digit hata diya

    }
    cout<<rev;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter any string: ";
//     cin >> str;

//     string rev = "";  // Initialize an empty string to store the reverse

//     // Loop through the string from the end to the beginning
//     for (int i = str.length() - 1; i >= 0; i--) {
//         rev += str[i];  // Add each character to the reverse string
//     }

//     cout << "Reversed string: " << rev << endl;

//     return 0;
// }

