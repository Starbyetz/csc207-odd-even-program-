#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> number;
    
    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an EVEN number." << endl;
    } else {
        cout << number << " is an ODD number." << endl;
    }
    
    return 0;
}
