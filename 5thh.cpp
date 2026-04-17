//Question5: write a program that takes two numbers from the user and print 
//their division result only if the denominator is not zero. Otherwise print
// “Division by zero is not possible.”

#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter 1st number ";
    cin >> num1 ;
    cout << "Enter 2nd number ";
    cin >> num2 ;


    if (num2 != 0)
        cout << "Result = " << num1 / num2;
    else
        cout << "Division by zero is not possible.";

    return 0;
}
