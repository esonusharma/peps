/*
6. Depict the use of mathematical functions and operators in C++.

Practice Exercise 9: Write a program to find the resultant of two forces normal to each other using functions.

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
    cout << sqrt(a) << "\n";
    cout << pow(a, b) << "\n";
    cout << atan(b / a) * 180 / PI << "\n";
}
```

Code:
*/

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592653589793238

float m1, m2, m, d;

void force_resultant();

int main()
{
    force_resultant();
    return 0;
}

void force_resultant()
{
    cout << "\n\t\t\t-----------------------------------------------";
    cout << "\n\t\t\t  To Find Resultant of Two Perpendicular Forces";
    cout << "\n\t\t\t-----------------------------------------------";
    cout << "\nThe Given Data is:";
    cout << "\n\t\tMagnitude of Force in X Direction(Newton)= ";
    cin >> m1;
    cout << "\n\t\tMagnitude of Force in Y Direction(Newton)= ";
    cin >> m2;
    m = sqrt(pow(m1, 2) + pow(m2, 2));
    d = atan(m2 / m1) * (180 / PI);
    cout << "\n\nSolution:";
    cout << "\n\t\tResultant Force(Newton)= " << m << " Newton";
    cout << "\n\t\tDirection of Force measured from +ve x-axis in ccw direction(Degrees)= " << d;
}
