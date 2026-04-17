//Question 3: Write a program that asks the user to enter two numbers. The program 
 //should display which number is the smaller and which is the larger.


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter value of a  ";
    cin >> a ;
    cout<<"enter value of b";
    cin>>b;

    if (a > b)
        cout << "Larger: " << a << " Smaller: " << b;
    else
        cout << "Larger: " << b << " Smaller: " << a;

    return 0;
}
