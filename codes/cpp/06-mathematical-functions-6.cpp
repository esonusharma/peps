/*
6. Depict the use of mathematical functions and operators in C++.

Practice Exercise 6: Write a program to find distance between two points from its coordinates.

```cpp
include <iostream>
include <cmath>
using namespace std;

// global variables
float variable1, result1, result2;

// function prototype
void calculate();

int main() {
    // take input using cin
    cin >> variable1;

    // call function
    calculate();

    // display output using cout
    cout << result1 << "\n" << result2;

    return 0;
}

// function definition
void calculate() {
    result1 = pow(variable1, 2);    // square of variable1
    result2 = sqrt(variable1);      // square root of variable1
}
```

Code:
*/

#include <iostream>
#include <cmath>

using namespace std;

// Global Variables
float p1, q1, p2, q2, d;

float distance();

int main()
{
    cout << "Enter the Co-ordinates of the points";
    cout << "\nx1: ";
    cin >> p1;
    cout << "\ny1: ";
    cin >> q1;
    cout << "\nx2: ";
    cin >> p2;
    cout << "\ny2: ";
    cin >> q2;
    d = distance();
    cout << "\nThe Distance b/w two points = " << d << endl;
    return 0;
}

float distance()
{
    float d = sqrt(pow(p2 - p1, 2) + pow(q2 - q1, 2));
    return d;
}
