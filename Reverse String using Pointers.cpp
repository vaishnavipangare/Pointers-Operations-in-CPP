// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {
    string str1;
    cout << "Enter the string to reverse\n";
    cin >> str1;

    int n = str1.length();
    char* ptr = &str1[0];  

    cout << "Reversed String\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << *(ptr + i);  
    }

    return 0;
}

// OUTPUT
// Enter the string to reverse
// Aditya
// Reversed String
// aytidA