/*
7. Illustrate the implementation of decision control in C++.

Practice Exercise 13: Write a program to categorise the regime as per the calculated Mach Number.

```cpp
include <iostream>
using namespace std;

int main() {
    int variable;

    cin >> variable;

    if (variable > 0) {
        cout << "Positive";
    } else if (variable < 0) {
        cout << "Negative";
    } else {
        cout << "Zero";
    }

    return 0;
}
```

Code:
*/

#include <iostream>

using namespace std;

int main()
{
    float v, vs, m;
    char k;
    cout << "\n\t\t\t------------------------------";
    cout << "\n\t\t\t  Regime according to Mach No.";
    cout << "\n\t\t\t------------------------------";
    cout << "\nDo you already have a Mach No.: ";
    cout << "\nProceed(y/n)?: ";
    cin >> k;

    if (k == 'n')
    {
        cout << "\n**We have to find out the Mach Number**";
        cout << "\nPlease enter the required(*)";
        cout << "\nPlease enter the velocity of an object(m/s)*: ";
        cin >> v;
        cout << "\nPlease enter the velocity of sound in that medium(m/s)*: ";
        cin >> vs;
        m = v / vs;
        cout << "\n\nMach Number = " << m;
    }
    else if (k == 'y')
    {
        cout << "\n\nEnter the value of Mach Number = ";
        cin >> m;
    }
    else
    {
        cout << "\n\nYou have entered a wrong choice!";
        exit(0);
    }

    cout << "\n--------";
    cout << "\nSolution";
    cout << "\n--------";
    if (m > 1)
    {
        cout << "\nRegime is Supersonic";
    }
    else if (m < 1)
    {
        cout << "\nRegime is Subsonic";
    }
    else
    {
        cout << "\nRegime is Sonic";
    }

    return 0;
}
