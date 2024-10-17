#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    
    int n = s.length();
    for (int i = 0; i < n; i++) {
        
        if (s[i] % 2 == 0) {
            s[i] = 'a'; 
        }
    }

    cout << "Modified string: " << s << endl; // Print the modified string
    return 0;
}





