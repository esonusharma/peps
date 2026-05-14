/*
7. Illustrate the implementation of decision control in C++.

Practice Exercise 12: Write a program to find the linear speed of a conveyor belt with provision for conversion of units as per user input using decision control statements and operators.

```cpp
include <iostream>
using namespace std;

int main() {
    int variable;

    cin >> variable;

    if (variable > 0) {
        cout << "Positive";
    }

    return 0;
}
```

Code:
*/

#include <iostream>

using namespace std;

#define PI 3.14159265358
// const float PI=3.14159265358;

int main()
{
    // Variables
    float d, rpm, v;
    char k;

    // Introduction message
    cout << "\n\t\t\t------------------------------------------";
    cout << "\n\t\t\t  To Calculate the Speed of Conveyor Belts";
    cout << "\n\t\t\t------------------------------------------";

    // Input diameter and RPM
    cout << "\nEnter the Diameter of Roller (inches): ";
    cin >> d;
    cout << "\nEnter the Roller's Revolutions per Minute (RPM): ";
    cin >> rpm;

    // Calculate speed in inches per minute
    v = PI * d * rpm;
    cout << "\nSolution:";
    cout << "\n--------";
    cout << "\nSpeed of Conveyor Belt: " << v << " inches/minute";

    // Ask for conversion
    cout << "\nWould you like to convert into feet/hour?";
    cout << "\nProceed (y/n)?: ";
    cin >> k;

    // Conversion and output
    if (k == 'y')
    {
        cout << "\nSpeed of Conveyor Belt: " << 5 * v << " feet/hour";
    }

    // End message
    cout << "\nThank You! Have a Nice Day";

    return 0;
}
