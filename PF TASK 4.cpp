#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "\nValues before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nValues after swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}