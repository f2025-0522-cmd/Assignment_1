#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int largest, smallest;


    cout << "Enter three integers:\n";
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;
    
    if (num1 == num2 && num2 == num3) {
        cout << "\nAll three numbers are equal: " << num1 << endl;
        largest = smallest = num1;
    } 
    else {
        if (num1 >= num2 && num1 >= num3)
            largest = num1;
        else if (num2 >= num1 && num2 >= num3)
            largest = num2;
         else
            largest = num3;

        if (num1 <= num2 && num1 <= num3)
            smallest = num1;
        else if (num2 <= num1 && num2 <= num3)
            smallest = num2;
        else
            smallest = num3;

        cout << "\nThe largest number is: " << largest << endl;
        cout << "The smallest number is: " << smallest << endl;
        cout << "The numbers are not all equal." << endl;
    }

    return 0;
}