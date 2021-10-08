//  we will see how to check a number is armstrong or not in c++
// let us take  Armstrong number of 3 digits
// then the sum of cubes of each digit is equal to the number itself. 
//  example, 153 is an Armstrong number because
//  1*1*1* + 5*5*5 + 3*3*3 = 153

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
