//Question 10: If you know the amount of mass that an object has, you can 
//calculate its weight, in newtons, with the following 
//formula: Weight = mass x 9.8 Write a program that asks the user to enter an
 //object's mass, then calculates and displays its weight. If the object weighs
  //more than 1,000 newtons, display a message indicating that it is too heavy.
   //If the object weighs 
//less than 10 newtons, display a message indicating that the object is too light.


#include <iostream>
using namespace std;

int main() {
    double mass, weight;

    cout << "Enter mass: ";
    cin >> mass;

    weight = mass * 9.8;

    cout << "Weight = " << weight << endl;

    if (weight > 1000)
        cout << "Too heavy";
    else if (weight < 10)
        cout << "Too light";

    return 0;
}
