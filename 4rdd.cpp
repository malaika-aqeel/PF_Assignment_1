//Question 4. Create to variables a and b assigning the same value (eg.10). 
//add 0.2 to a and print which one is larger and which is smaller
//. Use appropriate data types.

#include <iostream>
using namespace std;

int main() {
    double a = 10, b = 10;

    a = a + 0.2;

    cout << "a = " << a << " b = " << b << endl;

    if (a > b)
        cout << "a is larger";
    else
        cout << "b is larger";

    return 0;
}
