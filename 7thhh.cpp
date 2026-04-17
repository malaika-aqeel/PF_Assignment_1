//Question 7: Write a program that asks for the time (in minutes) 
//of three runners it took each of them to finish a race.
 //The program should display who came in first,second, and third place. 

#include <iostream>
using namespace std;

int main() {
    int r1, r2, r3;

    cout << "Enter times: ";
    cin >> r1 >> r2 >> r3;

    if (r1 < r2 && r1 < r3)
        cout << "1st: Runner1\n";
    else if (r2 < r1 && r2 < r3)
        cout << "1st: Runner2\n";
    else
        cout << "1st: Runner3\n";

    return 0;
}
