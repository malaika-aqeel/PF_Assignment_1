//Question 15: Using the following chart, write an if/else if statement 
//that assigns .10, .15, or .20
//to commission, depending on the value in sales entered by the user.
//Sales Commission Rate
//Up to $10,000 		10%
//$10,000 to $15,000 	15%
//Over $15,000 		20%


#include <iostream>
using namespace std;

int main() {
    double sales, commission;
    cout<<"enter sale";

    cin >> sales;

    if (sales <= 10000)
        commission = sales * 0.10;
    else if (sales <= 15000)
        commission = sales * 0.15;
    else
        commission = sales * 0.20;

    cout << "Commission = " << commission;

    return 0;
}
