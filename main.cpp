#include<iostream>
#include "cmplx.hpp"

using namespace std;
int main()
{
    // Create objects
    cmplx a, b, result;
    
    // Initialize objects
    a.real = 12;
    a.img = 4;
    b.real = 8;
    b.img = 6;
    
    // Display the initial values
    cout << "complex 1: ";
    a.display();
    cout << "complex 2: ";
    b.display();
    
    // Add the two objects
    result = a.add(b);
    
    // Display the result
    cout << "Result: ";
    result.display();
    
    return 0;
}