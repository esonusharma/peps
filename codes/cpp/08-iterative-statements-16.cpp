/*
8. Show the use of iterative statements in C++.

Practice Exercise 16: Write a program to draw a given material property table by using iterative statements and arrays.

```cpp
include <iostream>
using namespace std;

int main() {
    int arr[5];
    int i = 0;

    // Input using while loop
    while (i < 5) {
        cin >> arr[i];
        i++;
    }

    // Output using do-while loop
    int j = 0;
    do {
        cout << arr[j] << " ";
        j++;
    } while (j < 5);

    return 0;
}
```

Code:
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string m[20];
    float p[20][4];
    int i, j, n;

    // Get the number of materials
    cout << "\nEnter the number of Material(s): ";
    cin >> n;

    // Input names of materials using do-while loop
    i = 0;
    do
    {
        cout << "\nEnter the Name of Material " << (i + 1) << ": ";
        cin >> m[i];
        i++;
    } while (i < n);

    // Input properties for each material using do-while loop
    i = 0;
    do
    {
        cout << "\n\t\t\t\t-----------------";
        cout << "\n\t\t\t\t Data for " << m[i];
        cout << "\n\t\t\t\t-----------------\n";
        cout << "\nEnter the Modulus of Elasticity(E) in GPa: ";
        cin >> p[i][0];
        cout << "\nEnter the Modulus of Rigidity(G) in GPa: ";
        cin >> p[i][1];
        cout << "\nEnter the Poisson's Ratio(v): ";
        cin >> p[i][2];
        cout << "\nEnter the Unit Weight(w) in kN/m^3: ";
        cin >> p[i][3];
        i++;
    } while (i < n);

    // Display the material property table
    cout << "\n\t\t\t\t\t\t-------------------------------";
    cout << "\n\t\t\t\t\t\t    Material Property Table";
    cout << "\n\t\t\t\t\t\t-------------------------------\n";
    cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------";
    cout << "\nMaterial\t\tModulus of Elasticity(E)\tModulus of Rigidity(G)\t\tPoisson's Ratio(v)\t\t\tUnit Weight(w)\n\t\t\t\tGPa\t\t\t\tGPa\t\t\t\t\t\t\t\t  kN/m^3";
    cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------\n";

    i = 0;
    while (i < n)
    {
        cout << "\n" << m[i];
        j = 0;
        while (j < 4)
        {
            cout << "\t\t\t\t" << fixed << setprecision(3) << p[i][j];
            j++;
        }
        i++;
    }

    return 0;
}
