// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

void swap(int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(a,b);
    cout << "Value of the a is:" << a<<endl;
    cout << "Value of the b is:" << b<<endl;
    return 0;
}

// OUTPUT
// Value of the a is:20
// Value of the b is:10