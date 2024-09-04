// Statements and functions in c++

#include <iostream>

// a statement is a basic unit of computation in a c++ program
// every c++ program is a collection of statements organized in a certain way to achieve same goal
// Statements end with a semicolon in C++(;)

// Statements are executed in order from top to bottom when the program is run

// Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements

int addNumbers(int firstParameter, int secondParameter)
{
    int result = firstParameter + secondParameter;
    return result;
}

int main(int argc, char **argv)
{
    int firstNumber{10}; // Statement
    int secondNumber{4};

    std::cout << "First Number:" << firstNumber << std::endl;
    std::cout << "Second Number:" << secondNumber << std::endl;

    int sum = firstNumber + secondNumber;
    std::cout << "Sum:" << sum << std::endl;

    sum = addNumbers(10, 4);
    std::cout << "Sum:" << sum << std::endl;
    sum = addNumbers(34, 58);
    std::cout << "Sum:" << sum << std::endl;

    std::cout << "Sum :" << addNumbers(12, 13) << std::endl;

    return 0;
}