//Question 1: Write an if/else statement that assigns 
//0 to x when y is equal to 10. Otherwise, it should assign 1 to x.
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout<<"enter value of y";
    cin >> y;

    if (y == 10)
        x = 0;
    else
        x = 1;

    cout << "x = " << x;
    return 0;
}
