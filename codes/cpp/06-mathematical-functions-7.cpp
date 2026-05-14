/*
6. Depict the use of mathematical functions and operators in C++.

Practice Exercise 7: Write a program for finding the magnitude of forces by Lami’s theorem.

```cpp
include <iostream>
include <cmath>
define PI 3.14159
using namespace std;

int main() {
    // declare variables
    float variable1, result;

    // take input using cin (angle in degrees)
    cin >> variable1;

    // convert to radians and calculate sine
    result = sin(variable1 * PI / 180);

    // display output using cout
    cout << result;

    return 0;
}
```

Code:
*/

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265

float f1, f2, f3, x1, x2, x3;

int main()
{
    cout << "\nEnter the Magnitude of force F1(Newtons): ";
    cin >> f1;
    cout << "\nEnter the corresponding opposite angle(Degrees): ";
    cin >> x1;
    cout << "\nEnter the angle opposite to F2(Degrees): ";
    cin >> x2;
    cout << "\nEnter the angle opposite to F3(Degrees): ";
    cin >> x3;
    cout << "\n----------";
    cout << "\nSolution:";
    cout << "\n----------";
    f2 = (f1 / sin(x1 * PI / 180)) * sin(x2 * PI / 180);
    f3 = (f1 / sin(x1 * PI / 180)) * sin(x3 * PI / 180);
    cout << "\nThe Magnitude of F2(Newtons): " << f2;
    cout << "\nThe Magnitude of F3(Newtons): " << f3;
    return 0;
}
