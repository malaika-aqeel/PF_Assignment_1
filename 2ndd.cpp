//Question 2. Write an if statement that prints the message "The number is valid" 
//if the variable temperature is within the range -50 through 150.
#include <iostream>
using namespace std;

int main() {
    int temp;
    cout<<"enter temperature ";
    cin >> temp;

    if (temp >= -50 && temp <= 150)
        cout << "The number is valid";

    return 0;
}
