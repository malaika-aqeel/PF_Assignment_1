//Question 13. Ask user which TV model he wants to purchase and display
// the features of the respective model .
//Model 300  has features Picture-in-a-picture, Stereo sound, and Remote control
//Model 200		Stereo sound and Remote control
//Model 100		Remote control only

#include <iostream>
using namespace std;

int main() {
    int model;

    cout << "Enter model: ";
    cin >> model;

    if (model == 300)
        cout << "Picture-in-picture, Stereo, Remote";
    else if (model == 200)
        cout << "Stereo, Remote";
    else if (model == 100)
        cout << "Remote only";

    return 0;
}
