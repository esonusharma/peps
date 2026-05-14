/*
6. Depict the use of mathematical functions and operators in C++.

Practice Exercise 8: Write a program to resolve the inclined force using functions.

```cpp
include <iostream>
include <cmath>
define PI 3.14159
using namespace std;

// function prototype
void calculateTrig(float angle);

int main() {
    // declare variable
    float variable1;

    // take input using cin (angle in degrees)
    cin >> variable1;

    // call function
    calculateTrig(variable1);

    return 0;
}

// function definition
void calculateTrig(float angle) {
    // convert to radians
    float radians = angle * PI / 180;

    // calculate sin and cos
    float sineValue = sin(radians);
    float cosineValue = cos(radians);

    // display output using cout
    cout << "sin: " << sineValue << "\n";
    cout << "cos: " << cosineValue << "\n";
}
```

Code:
*/

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592653589793238

void force_resolution(float m, float d);

int main()
{
    float p, phi;
    cout << "\n\t\t\t-----------------------";
    cout << "\n\t\t\t  Resolution of Forces";
    cout << "\n\t\t\t-----------------------";
    cout << "\nThe Given Data is:";
    cout << "\n\t\tMagnitude of Force (Newton) = ";
    cin >> p;
    cout << "\n\t\tDirection of Force (Degrees) = ";
    cin >> phi;
    force_resolution(p, phi);
    return 0;
}

void force_resolution(float m, float d)
{
    float x1, x2;
    x1 = m * cos(d * PI / 180);
    x2 = m * sin(d * PI / 180);
    cout << "\n\nSolution:";
    cout << "\n\t\tForce component in X Direction = " << x1 << " Newton";
    cout << "\n\t\tForce component in Y Direction = " << x2 << " Newton";
}
