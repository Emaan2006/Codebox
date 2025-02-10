#include <iostream>
using namespace std;
int main() {
    int n, bill = 0;
    
    cout << "Enter the number of units consumed: ";
    cin >> n;

    if (n <= 100) {
        bill = n * 5;  
    }
    else if (n <= 300) {
        bill = (100 * 5) + (n - 100) * 7;  
    }
    else {
        bill = (100 * 5) + (200 * 7) + (n - 300) * 10;  
    }
    cout << "The total bill is: " << bill << endl;
    return 0;
}
