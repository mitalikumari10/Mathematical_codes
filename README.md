## Simple Sum Calculation Program in C++

This markdown includes the C++ code for a simple program that calculates the sum of two numbers. You can copy and paste this into your README or other markdown file to explain and showcase the C++ program.


```cpp
#include <iostream>

int main() {
    int num1, num2, sum;

    // Input two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << "\n";

    return 0;
}
