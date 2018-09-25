#include <iostream>

bool is_leap_year(int year);

#ifndef MARMOSET_TESTING

int main();

#endif

#ifndef MARMOSET_TESTING

int main() {
    unsigned int year{};
    std::cout << "Please enter a year.";
    std::cin >> year;
    if (is_leap_year(year)) {
        std::cout << year << " is a leap year!";
    } else {
        std::cout << year << " is not a leap year!";
    }
    return 0;
}

#endif

bool is_leap_year(int year) {
    if (year > 1582) {
        if (year % 4 == 0) {
            if (year % 100 == 0 && year % 400 != 0) {
                return false;
            } else {
                return true;
            }
        }
    }
    return false;
}