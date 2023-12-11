#include <iostream>
using namespace std;

int main() 
{
    int num = 12;
    while (num >= 0) 
	{
        if (num % 5 == 0) 
		{
            num++;
            continue;
        }
        cout << num << " ";
        num = num - 2;
    }
    cout << endl;
    return 0;
}

