#include <iostream>
#include <cmath>

//Question 4

double arithmetic_mean(double v, double w, double x, double y, double z);
double geometric_mean(double v, double w, double x, double y, double z);
double harmonic_mean(double v, double w, double x, double y, double z);
double largest_of_mean(double arithmetic, double geometric, double harmonic);

double arithmetic_mean(double v, double w, double x, double y, double z) {
    return (v + w + x + y + z) / 5;
}

double geometric_mean(double v, double w, double x, double y, double z) {
    return pow((v * w * x * y * z), 1.0/5.0);
}

double harmonic_mean(double v, double w, double x, double y, double z) {
    return 1/((1/v + 1/w + 1/x + 1/y + 1/z) / 5);
}

double largest_of_mean(double arithmetic, double geometric, double harmonic){
    if (arithmetic > geometric && arithmetic > harmonic){
        return arithmetic;
    } else if (geometric > harmonic){
        return geometric;
    }
    return harmonic;
}

int main() {
    std::cout << largest_of_mean(arithmetic_mean(1,2,3,4,5), geometric_mean(1,2,3,4,5), harmonic_mean(1,2,3,4,5));
    return 0;
}