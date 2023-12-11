#include <iostream>
using namespace std;

int main()
{
    double sale, bonus;
    cout << "Enter the value of sale: ";
    cin >> sale;
    
    if (sale > 20000)
    {
        bonus = 0.10;
    }
    else if (sale > 10000 && sale <= 20000)
    {
        bonus = 0.05;
    }
    else
    {
        bonus = 0;
    }
    
    cout << "Bonus = " << bonus << endl;
    
    return 0;
}

