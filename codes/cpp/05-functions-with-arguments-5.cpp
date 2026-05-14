/*
5. Exhibit the application of functions with the argument approach in C++.

Practice Exercise 5: Write a program to calculate the sum of two forces using the function with argument approach implementing the calling of function with call by value type.

```cpp
include <iostream>
using namespace std;

// function definition (call by value)
float calculateSum(float variable1, float variable2) {
    // return sum of two variables
    return variable1 + variable2;
}

int main() {
    // declare variables
    float variable1, variable2, result;

    // take input using cin
    cin >> variable1 >> variable2;

    // call function (call by value)
    result = calculateSum(variable1, variable2);

    // display output using cout
    cout << result;

    return 0;
}
```

Code:
*/

#include <iostream> // Inclusion of the input-output stream library
#include <string>

using namespace std; // Using the standard namespace

const string UNIT = "Newton"; // Symbolic constant for unit of force

float fsum(float x1, float x2); // Function declaration to sum two float numbers

int main()
{
    float f1, f2, sum;                         // Variable declarations
    cout << "\n\t\t\t\t\t\t-----------------"; // Output decorative header
    cout << "\n\t\t\t\t\t\tSum of two Forces";
    cout << "\n\t\t\t\t\t\t-----------------\n";
    cout << "\nEnter the magnitude of First Force(" << UNIT << "): ";  // Prompt for the first force
    cin >> f1;                                                         // Read first force value
    cout << "\nEnter the magnitude of Second Force(" << UNIT << "): "; // Prompt for the second force
    cin >> f2;                                                         // Read second force value
    sum = fsum(f1, f2);                                                // Calculate sum using the `fsum` function
    cout << "\nSolution";                                              // Output solution header
    cout << "\n--------";
    cout << "\nSum of forces = " << sum << " " << UNIT; // Output sum result
    return 0;                                           // Indicating successful program termination
}

float fsum(float x1, float x2) // Function definition to sum two float numbers
{
    return x1 + x2; // Return the sum of x1 and x2
}
