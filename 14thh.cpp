//Question 14: The date June 10, 1960 is special because when we write 
//it in the following format, the
//month times the day equals the year.
//6/10/60
//Write a program that asks the user to enter a month (in numeric form),
 //a day, and a two-digit year. The program should then determine whether
 // the month times the day is equal to the year. If so, it should display 
 //a message saying the date is magic.
//Otherwise, it should display a message saying the date is not magic.
//Sample output:
//Input: Month = 2, Day = 5, Year = 20
//Calculation: 2 * 5 = 10(10 is not equal to 20) 
//Result: NOT MAGIC.

#include <iostream>
using namespace std;

int main() {
    int m, d, y;
    cout<<"month , day year";
     
    cin >> m >> d >> y;

    if (m * d == y)
        cout << "MAGIC DATE";
    else
        cout << "NOT MAGIC";

    return 0;
}
