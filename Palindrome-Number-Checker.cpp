#include <iostream>
using namespace std;

int main() {
    cout << "=== Palindrome Number Checker ===" << endl;

    int number, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> number;

    original = number;

    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}
