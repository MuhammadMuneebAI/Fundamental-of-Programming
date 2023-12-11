#include <iostream>
using namespace std;

int main() {
    int n, num, even_sum = 0, odd_sum = 0;
    
    cout << "Enter the number of integers: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cout << "Enter integer #" << i << ": ";
        cin >> num;
        
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }
    
    cout << "Sum of even integers: " << even_sum << endl;
    cout << "Sum of odd integers: " << odd_sum << endl;
    
    return 0;
}
