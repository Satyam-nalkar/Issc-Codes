#include <iostream>
#include <cmath>

using namespace std;

// Define the function whose root we want to find
double function(double x) {
    return x*x*x - 2*x - 5; // f(x) = x^3 - 2x -5
}

// Define the derivative of the function
double derivative(double x) {
    return 3*x*x - 2;           // f'(x) = 3x^2 - 2
}

// Newton-Raphson Method Function
double newtonRaphson(double x0, double tol, int maxIterations) {
    double x = x0;
    
    for (int i = 1; i <= maxIterations; i++) {
        double fx = function(x);
        double dfx = derivative(x);

        if (dfx == 0) { 
            cout << "Derivative is zero. No solution found!" << endl;
            return NAN;
        }

        double x1 = x - (fx / dfx);  
    
        cout << "Iteration " << i << ": x = " << x1 << ", f(x) = " << fx << endl;

        // Stop if the difference is within the tolerance
        if (fabs(x1 - x) < tol) {
            return x1;
        }

        x = x1;
    }

    cout << "Max iterations reached. Approximate root: ";
    return x;
}


int main() {
    double x0, tol;
    int maxIterations;

    // Taking input
    cout << "Enter initial guess (x0): ";
    cin >> x0;
    cout << "Enter tolerance: ";
    cin >> tol;
    cout << "Enter maximum iterations: ";
    cin >> maxIterations;

    double root = newtonRaphson(x0, tol, maxIterations);

    if (!isnan(root)) {
        cout << "Root of the equation: " << root << endl;
    }

    return 0;
}
