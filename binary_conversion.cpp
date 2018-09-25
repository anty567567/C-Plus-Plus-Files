#include <iostream>

int main() {
    int numbers[20]{};
    int decimal{};
    std::cout << "please input a number: ";
    std::cin >> decimal;
    for (int i = 0; i < 20; i++) {
        if (decimal%2 == 1){
            numbers[i] = decimal%2;
        }
        decimal/=2;
    }
    for (int j = 19; j >= 0; j--) {
        std::cout << numbers[j];
    }
    return 0;
}