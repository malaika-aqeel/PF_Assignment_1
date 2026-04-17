//Question 6: Assume the variables a = 2, b = 4, and c = 6. 
//Determine whether each of the following conditions is True or False:
 //A) a == 4 || b > 2 
//B) 6 <= c && a 3 
//C) 1 != b && c != 3
 //D) a >=-1|| a <= b
 //E) ! (a > 2)

#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 4, c = 6;

    if (a == 4 || b > 2)
        cout << " True" << endl;
    else
        cout << " False" << endl;

    if (6 <= c && a < 3)
        cout << " True" << endl;
    else
        cout << "False" << endl;

    if (1 != b && c != 3)
        cout << " True" << endl;
    else
        cout << " False" << endl;

    if (a >= -1 || a <= b)
        cout << " True" << endl;
    else
        cout << " False" << endl;

    if (!(a > 2))
        cout << " True" << endl;
    else
        cout << " False" << endl;

    return 0;
}
