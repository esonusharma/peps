/*
7. Illustrate the implementation of decision control in C++.

Practice Exercise 11: Write a program to calculate the roots of a quadratic equation using decision control statements in perspective to work with all the cases whether the equation gives a real, imaginary or equal roots.

```cpp
include <iostream>
using namespace std;

int main() {
    int variable;

    cin >> variable;

    if (variable > 0) {
        cout << "Positive";
    } else {
        cout << "Not Positive";
    }

    return 0;
}
```

Code:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // 1. Initialize variables
    float a, b, c, k, r1, r2, r11, r12;

    // 2. Display purpose of program
    cout << "\n\t\t\t-------------------------------";
    cout << "\n\t\t\t  Roots of Quadratic Equation";
    cout << "\n\t\t\t-------------------------------";
    cout << "\nThe Quadratic Equation is: (";

    // 3. Input coefficients
    cin >> a;
    cout << ")x^2 + (";
    cin >> b;
    cout << ")x + (";
    cin >> c;
    cout << ")";

    // 4. Calculate discriminant
    k = (b * b - 4 * a * c);

    // 5. Check if discriminant is non-negative
    if (k >= 0)
    {
        // Real roots
        cout << "\n**The Equation gives 'Real Roots'**";
        cout << "\n-> The Roots are:";
        r1 = (-b + sqrt(k)) / (2 * a);
        r2 = (-b - sqrt(k)) / (2 * a);
        cout << "\nRoot1 = " << r1 << "\tRoot2 = " << r2;
    }
    else
    {
        // Imaginary roots
        cout << "\n**The Equation gives 'Complex Roots'**";
        cout << "\n-> The Roots are:";
        r11 = (-b) / (2 * a);
        r12 = sqrt(-k) / (2 * a);
        cout << "\nRoot1 = " << r11 << " + i" << r12 << "\tRoot2 = " << r11 << " - i" << r12;
    }

    return 0;
}
