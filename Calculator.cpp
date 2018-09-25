#include <iostream>
#include <cmath>
#include <string>

//Question 11

double calculate(double x, char operation, double y);


double calculate(double x, char operation, double y) {
    if (operation == '+') {
        return x + y;
    } else if (operation == '-') {
        return x - y;
    } else if (operation == '*') {
        return x * y;
    } else {
        return x / y;
    }
}

int main() {
    double x{}, y{};
    char operation{};
    std::cout << "Input two numbers and an operator(+,-,*,/) to calculate the operation between the two numbers."
              << std::endl;
    std::cout << "First number: ";
    std::cin >> x;
    std::cout << "Second number: ";
    std::cin >> y;
    std::cout << "Operator: ";
    std::cin >> operation;
    std::cout << "The result is: " << calculate(x, operation, y);
    return 0;
}
