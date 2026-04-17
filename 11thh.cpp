//Question 11. Write an if statement that performs the following logic: 
//if the variable sales is greater than 50,000, then add 0.25 of 
//the sales variable, and 250 as a bonus. Print the sales.

#include <iostream>
using namespace std;

int main() {
    double sales;

    cout << "Enter sales: ";
    cin >> sales;

    if (sales > 50000)
        sales = sales + (0.25 * sales) + 250;

    cout << "Total Sales = " << sales;

    return 0;
}
