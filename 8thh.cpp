//Question 8: Write a program that displays the following menu: Geometry Calculator

 //1. Calculate the Area of a Circle
 //2. Calculate the Area of a Rectangle 
//3. Calculate the Area of a Triangle
 //Enter your choice (1-3): If the user enters 1, the program should ask for 
 //the radius of the circle then display its area. Use the following
  //formula: area = nr2 Use 3.14159 for n and the radius of the circle for r. 
//If the user enters 2, the program should ask for the length and
 //width of the rectangle, then display the rectangle's area.
  //Use the following formula: area = length* width If the user enters 3,
   //the program should ask for the length of the triangle's base and its height,
    //then display its area. Use the following formula: area = base * height* .5
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1.Circle 2.Rectangle 3.Triangle: ";
    cin >> choice;

    if (choice == 1) {
        double r;
        cout<<"enter value of r";
        cin >> r;
        cout << "Area = " << 3.14159 * r * r;
    }
    else if (choice == 2) {
        double l, w;
        cin >> l >> w;
        cout << "Area = " << l * w;
    }
    else if (choice == 3) {
        double b, h;
        cin >> b >> h;
        cout << "Area = " << 0.5 * b * h;
    }

    return 0;
}
