#include <iostream>
#include <cmath>  // For mathematical functions like sin() and M_PI

using namespace std;

// Define the function f(x) to integrate
double f(double x) {
    return sin(x); 
}

// Generate a random number between a and b using rand()
double random_between(double a, double b) {
    return a + static_cast<double>(rand()) / RAND_MAX * (b - a);
}

// Bethe-Salpeter numerical integration method
double bethe_salpeter_integration(double a, double b, int n) {
    double I = 0.0;  // To accumulate the result
    int k = 0;

    while (k <= n) {
        // Generate a random number r in the interval [a, b]
        double r = random_between(a, b);

        // Add to the integral sum
        I += f(r) * r;

        // Increment the counter
        k++;
    }

    return I / k;  // Return the average value of the integral
}

int main() {
    double a = M_PI;              // Lower bound: pi
    double b = 3 * M_PI / 2;      // Upper bound: 3pi/2
    int n;                        // Variable for number of iterations

    cout << "Enter the number of iterations (n): ";
    cin >> n;

    // Perform the integration
    double result = bethe_salpeter_integration(a, b, n);

    // Print the result
    cout << "Numerical integration result: " << result << endl;

    return 0;
}

