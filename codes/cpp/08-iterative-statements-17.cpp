/*
8. Show the use of iterative statements in C++.

Practice Exercise 17: Write a program to find the properties of a material from the tensile test by providing the load, elongation, and geometrical properties of a specimen by using functions, arrays, and iterative statements.

```cpp
include <iostream>
using namespace std;

int main() {
    // 1D array
    int arr1D[5];

    // Input for 1D array
    for (int i = 0; i < 5; i++) {
        cin >> arr1D[i];
    }

    // Output for 1D array
    cout << "1D Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1D[i] << " ";
    }

    cout << "\n";

    // 2D array
    int arr2D[2][3];

    // Input for 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr2D[i][j];
        }
    }

    // Output for 2D array
    cout << "2D Array:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << "\n";
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
    int i, j, n;
    char name[20];
    float od, ol, oa, pr, r[20][8]; // Note: Updated array size to 8 columns

    cout << "\n\t\t\t--------------------------------------";
    cout << "\n\t\t\t  Tensile Test: Material Properties";
    cout << "\n\t\t\t--------------------------------------";
    cout << "\n=>Given Data:";
    cout << "\nEnter the Name of Material: ";
    cin >> name;
    cout << "\nEnter the Original Diameter(mm): ";
    cin >> od;
    cout << "\nEnter the Original Length(mm): ";
    cin >> ol;
    cout << "\nEnter the Original Cross-Sectional Area(mm^2): ";
    cin >> oa;
    cout << "\nEnter the Poisson's Ratio: ";
    cin >> pr;
    cout << "\n\t\t\t**Tensile Test Outcome**";
    cout << "\nEnter the Number of Readings Acquired During Test: ";
    cin >> n;
    cout << "\nEnter the Load(kN) and Elongation(mm) Readings: ";

    for (i = 0; i < n; i++)
    {
        cout << "\n\n--------------";
        cout << "\nSample Set " << i + 1;
        cout << "\n--------------";
        cout << "\nLoad Applied: ";
        cin >> r[i][0];
        cout << "\nElongation due to Applied Load: ";
        cin >> r[i][1];
    }

    for (i = 0; i < n; i++)
    {
        r[i][2] = r[i][0] * 1000 / ((M_PI * pow(od, 2)) / 4);
        r[i][3] = r[i][1] / ol;
        r[i][4] = r[i][3] * pr;
        r[i][5] = r[i][4] * od;
        r[i][6] = r[i][3] * 100;
        r[i][7] = (1 - (((M_PI * pow((od - r[i][5]), 2)) / 4) / oa)) * 100;
    }

    cout << "\n\t\t\t--------------------------------------";
    cout << "\n\t\t\t  Tensile Test: Material Properties";
    cout << "\n\t\t\t--------------------------------------";
    cout << "\n\t\t\t***Tensile Test on " << name << "***";
    cout << "\n\n----------";
    cout << "\n=>Results=<";
    cout << "\n-----------";
    cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------";
    cout << "\nSr.No.\tLoad\t\tElongation\tStress\t\tLongitudinal\tLateral\t\tReduction in\tElongation\tReduction in\n\t(kN)\t\t(mm)\t\t(N/mm2)\t\tStrain\t\tStrain\t\tDiameter(mm)\t\t\tArea";
    cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "\n" << i + 1;
        for (j = 0; j < 8; j++)
        {
            cout << "\t" << r[i][j];
        }
    }
    return 0;
}
