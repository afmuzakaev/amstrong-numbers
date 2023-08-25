#include <iostream>
#include <cmath>
using namespace std;

string isArmstrong(int n) {
    int originalNumber = n;
    int numDigits = 0;
    
    // Count the number of digits in the number
    while (n > 0) {
        n /= 10;
        numDigits++;
    }
    
    n = originalNumber; // Reset n to its original value
    int sum = 0;
    
    // Calculate the sum of the cubes of digits
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }
    
    if (sum == originalNumber) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int N;
    cout << "Enter a 3-digit number: ";
    cin >> N;

    if (N >= 100 && N <= 999) {
        string result = isArmstrong(N);
        cout << "Output: " << result << endl;
    } else {
        cout << "Please enter a valid 3-digit number." << endl;
    }

    return 0;
}
