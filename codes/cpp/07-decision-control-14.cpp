/*
7. Illustrate the implementation of decision control in C++.

Practice Exercise 14: Write a program to find the result of placing a solid body into a liquid with the flexibility to adapt to any liquid and solid.

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

using namespace std;

#define g 9.81

int main()
{
    // Declare variables
    float brho, bvol, lrho, bw, lw;

    // Prompt and read properties of the body
    cout << "\n\t\t\t--------------------------------------------";
    cout << "\n\t\t\t  Solid Body behavior while placed in liquid";
    cout << "\n\t\t\t--------------------------------------------";
    cout << "\n**Properties of the Body**";
    cout << "\nEnter the Density of the body (kg/m^3)= ";
    cin >> brho;
    cout << "\nEnter the Volume of the body (m^3)= ";
    cin >> bvol;

    // Prompt and read properties of the liquid
    cout << "\n**Properties of the liquid**";
    cout << "\nEnter the Density of the liquid (kg/m^3)= ";
    cin >> lrho;

    // Compute weight of the body and buoyant force
    bw = brho * bvol * g;
    lw = lrho * bvol * g;

    // Output the result
    cout << "\n\n**************";
    cout << "\nThe Result is:";
    cout << "\n**************";
    if (bw <= lw)
    {
        cout << "\nThe weight of the body (" << bw << ") is < Maximum upward thrust (" << lw << ")";
        cout << "\nThe Body will float";
    }
    else
    {
        cout << "\nThe weight of the body (" << bw << ") is > Maximum upward thrust (" << lw << ")";
        cout << "\nThe Body will sink";
    }
    return 0;
}
