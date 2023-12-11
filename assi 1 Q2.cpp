#include<iostream>                                          // header file for input/output
using namespace std;                                        // main function
int main()
{
	int x;
    int y;
    int z;
    int result;
cout << "Enter three integers: ";                           // compute the user to enter three integers
cin >> x;                                                   // Read three integers from the keyboard and store them in x, y, and z
cin >> y ;
cin >> z;
result = x * y * z;                                         // Compute the product of x, y, and z and store the result 
cout << "The product is " << result << endl;                // Print the product of x, y, and z
return 0;                                                   // Indicate that the program has terminated successfully
}
