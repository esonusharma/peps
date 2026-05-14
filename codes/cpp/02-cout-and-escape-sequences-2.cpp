/*
2. Demonstrate the usage of the cout function and escape sequences in C++.

Practice Exercise 2:  Write a program to draw a given material property table by using cout function and escape sequences.

```cpp
include <iostream>
using namespace std;

int main() {
    cout << "Heading1\tHeading2\tHeading3\n";
    cout << "Value1\t\tValue2\t\tValue3\n";
    cout << "Value4\t\tValue5\t\tValue6\n";
    return 0;
}
```

Code:
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\t\t\t\t\t\t-------------------------------";
    cout << "\n\t\t\t\t\t\t    Material Property Table";
    cout << "\n\t\t\t\t\t\t-------------------------------\n";
    cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------";
    cout << "\nMaterial\t\tModulus of Elasticity(E)\t\tModulus of Rigidity(G)\t\tPoisson's Ratio(v)\t\tUnit Weight(w)\n\t\t\t\tGPa\t\t\t\t\tGPa\t\t\t\t\t\t\t  kN/m^3";
    cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\nBrass\t\t\t\t106\t\t\t\t\t40.1\t\t\t\t0.324\t\t\t  83.8";
    cout << "\nCast Iron\t\t\t100\t\t\t\t\t41.4\t\t\t\t0.211\t\t\t  70.6";
    cout << "\nCopper\t\t\t\t119\t\t\t\t\t44.7\t\t\t\t0.326\t\t\t  87.3";
    cout << "\nGlass\t\t\t\t46.2\t\t\t\t\t18.6\t\t\t\t0.245\t\t\t  25.4";

    return 0;
}
