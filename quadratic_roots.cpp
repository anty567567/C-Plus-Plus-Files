#include <iostream>
#include <cmath>
#include <string>

//Question 10

int discriminant(double a, double b, double c);

void roots(double a, double b, double c);

int discriminant(double a, double b, double c) {
    double calculated_value = b * b - 4 * a * c;
    if (calculated_value < 0) {
        return 0;
    } else if (calculated_value == 0) {
        return 1;
    }
    return 2;
}

void roots(double a, double b, double c) {
    if (discriminant(a, b, c) == 2) {
        std::cout << "solutions are: " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << ", "
                  << (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    } else if (discriminant(a, b, c) == 1) {
        std::cout << "solution is: " << -b / (2 * a);
    } else {
        std::cout << "solutions are: " << -b / (2 * a) << " + " << sqrt(-1 * (b * b - 4 * a * c)) / (2 * a) << "j, "
                  << -b / (2 * a) << " - " << sqrt(-1 * (b * b - 4 * a * c)) / (2 * a) << "j";
    }
}

int main() {
    roots(1,1,1);
    return 0;
}
