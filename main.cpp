#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num2 != 0)
        cout << "Remainder (num1 % num2): " << num1 % num2 << endl;
    else
        cout << "Remainder: Cannot divide by zero" << endl;

    if (num1 != 0)
        cout << "Remainder (num2 % num1): " << num2 % num1 << endl;
    else
        cout << "Second remainder: Cannot divide by zero" << endl;

    double average = (num1 + num2) / 2.0;

    cout << "Average: " << average << endl;
    cout << "Square of first number: " << num1 * num1 << endl;
    cout << "Square of second number: " << num2 * num2 << endl;

    return 0;
}
