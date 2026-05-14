/*
6. Depict the use of mathematical functions and operators in C++.

Practice Exercise 10: Write a program to find the resultant of two coplanar and concurrent forces using functions.

```cpp
include <iostream>
include <cmath>
define PI 3.14159
using namespace std;

// function prototype
void calculate(float a, float b);

int main() {
    float a, b;

    cin >> a >> b;

    calculate(a, b);

    return 0;
}

void calculate(float a, float b) {
    // sqrt and pow
    cout << "sqrt: " << sqrt(a) << "\n";
    cout << "pow: " << pow(a, b) << "\n";

    // atan in degrees
    cout << "atan (degrees): " << atan(b / a) * 180 / PI << "\n";

    // convert to radians
    float radians = a * PI / 180;

    // sin and cos
    cout << "sin: " << sin(radians) << "\n";
    cout << "cos: " << cos(radians) << "\n";
}
```

Code:
*/

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592653589793238

float m1, m2, d1, m, d;

void force_resultant()
{
    // Display header
    cout << "\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t  To Find Resultant of Two Coplanar Concurrent Forces";
    cout << "\n\t\t\t-----------------------------------------------";

    // Input data
    cout << "\nThe Given Data is:";
    cout << "\n\t\tMagnitude of First Force(Newton)= ";
    cin >> m1;
    cout << "\n\t\tMagnitude of Second Force(Newton)= ";
    cin >> m2;
    cout << "\n\t\tAngle between two vectors(Degrees)= ";
    cin >> d1;

    // Convert angle to radians
    float d1_rad = d1 * (PI / 180);

    // Calculate resultant magnitude and direction
    m = sqrt(pow(m1, 2) + pow(m2, 2) + (2 * m1 * m2 * cos(d1_rad)));
    d = atan((m2 * sin(d1_rad)) / (m1 + (m2 * cos(d1_rad)))) * (180 / PI);

    // Display results
    cout << "\n\nSolution:";
    cout << "\n\t\tResultant Force(Newton)= " << m << " Newton";
    cout << "\n\t\tDirection of Force measured from +ve x-axis in ccw direction(Degrees)= " << d;
}

int main()
{
    force_resultant();
    return 0;
}
