#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num1, num2;
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;

double sum = num1 + num2;
double diff = num1 - num2;
double prod = num1 * num2;
double quot = (num2 != 0) ? num1 / num2 : 0;

cout << fixed << setprecision(3);
cout << "\nFloating Point Results " << endl;
cout << "Sum: " << sum << endl;
cout << "Difference: " << diff << endl;
cout << "Product: " << prod << endl;
if (num2 != 0)
cout << "Quotient: " << quot << endl;
else
cout << "Quotient: Undefined (division by zero)" << endl;


int a = (int)num1;
    int b = (int)num2;

    cout << "\nInteger Results (after casting)" << endl;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;

    if (b != 0)
        cout << "Quotient: " << (double)a / b << endl;
    else
        cout << "Quotient: Undefined (division by zero)" << endl;

    return 0;
}
