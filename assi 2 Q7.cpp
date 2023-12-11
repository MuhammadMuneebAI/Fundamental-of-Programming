#include <iostream>
using namespace std;

int main() 
  {
    double side1, side2, side3;

    cout << "Enter the lengths of three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1*side1 == side2*side2 + side3*side3 ||
        side2*side2 == side1*side1 + side3*side3 ||
        side3*side3 == side1*side1 + side2*side2) 
    {
        cout << "This is a right triangle." << endl;
    } else 
   {
        cout << "This is not a right triangle." << endl;
    }

    return 0;
 }

