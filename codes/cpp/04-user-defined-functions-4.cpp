/*
4. Implement user-defined functions and controlled output functionality in C++.

Practice Exercise 4: Write a program to draw a given material property table using functions and values entered by the user.

```cpp
include <iostream>
using namespace std;

// function without arguments
void displayTable() {
    // declare variables inside function
    string variable1;
    float variable2, variable3;

    // take input using cin
    cin >> variable1 >> variable2 >> variable3;

    // display output using cout with escape sequences
    cout << "Heading1\tHeading2\tHeading3\n";
    cout << variable1 << "\t" << variable2 << "\t" << variable3 << "\n";
}

int main() {
    // call function
    displayTable();

    return 0;
}
```

Code:
*/

#include <iostream>
#include <iomanip>

using namespace std;

void material_property_table()
{
    string m1, m2, m3, m4;
    float p11, p12, p13, p14, p21, p22, p23, p24, p31, p32, p33, p34, p41, p42, p43, p44;

    // Prompt user for material names
    cout << "Enter the Name of first Material: ";
    cin >> m1;
    cout << "Enter the Name of second Material: ";
    cin >> m2;
    cout << "Enter the Name of third Material: ";
    cin >> m3;
    cout << "Enter the Name of fourth Material: ";
    cin >> m4;

    // Prompt user for properties of the first material
    cout << "\n-----------------\n";
    cout << " Data for " << m1 << "\n";
    cout << "-----------------\n";
    cout << "Enter the Modulus of Elasticity(E) in GPa: ";
    cin >> p11;
    cout << "Enter the Modulus of Rigidity(G) in GPa: ";
    cin >> p12;
    cout << "Enter the Poisson's Ratio(v): ";
    cin >> p13;
    cout << "Enter the Unit Weight(w) in kN/m^3: ";
    cin >> p14;

    // Prompt user for properties of the second material
    cout << "\n-----------------\n";
    cout << " Data for " << m2 << "\n";
    cout << "-----------------\n";
    cout << "Enter the Modulus of Elasticity(E) in GPa: ";
    cin >> p21;
    cout << "Enter the Modulus of Rigidity(G) in GPa: ";
    cin >> p22;
    cout << "Enter the Poisson's Ratio(v): ";
    cin >> p23;
    cout << "Enter the Unit Weight(w) in kN/m^3: ";
    cin >> p24;

    // Prompt user for properties of the third material
    cout << "\n-----------------\n";
    cout << " Data for " << m3 << "\n";
    cout << "-----------------\n";
    cout << "Enter the Modulus of Elasticity(E) in GPa: ";
    cin >> p31;
    cout << "Enter the Modulus of Rigidity(G) in GPa: ";
    cin >> p32;
    cout << "Enter the Poisson's Ratio(v): ";
    cin >> p33;
    cout << "Enter the Unit Weight(w) in kN/m^3: ";
    cin >> p34;

    // Prompt user for properties of the fourth material
    cout << "\n-----------------\n";
    cout << " Data for " << m4 << "\n";
    cout << "-----------------\n";
    cout << "Enter the Modulus of Elasticity(E) in GPa: ";
    cin >> p41;
    cout << "Enter the Modulus of Rigidity(G) in GPa: ";
    cin >> p42;
    cout << "Enter the Poisson's Ratio(v): ";
    cin >> p43;
    cout << "Enter the Unit Weight(w) in kN/m^3: ";
    cin >> p44;

    // Display material properties in a formatted table
    cout << "\n-------------------------------\n";
    cout << "    Material Property Table\n";
    cout << "--------------------------------\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "Material\t\tModulus of Elasticity(E)\t\tModulus of Rigidity(G)\t\tPoisson's Ratio(v)\t\tUnit Weight(w)\n";
    cout << "                        GPa\t\t\t          GPa\t\t\t\t\t\t  kN/m^3\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << fixed << setprecision(1);
    cout << m1 << "\t\t\t\t" << p11 << "\t\t\t\t\t" << p12 << "\t\t\t\t" << p13 << "\t\t\t  " << p14 << endl;
    cout << m2 << "\t\t\t" << p21 << "\t\t\t\t\t" << p22 << "\t\t\t\t" << p23 << "\t\t\t  " << p24 << endl;
    cout << m3 << "\t\t\t\t" << p31 << p32 << "\t\t\t\t" << p33 << "\t\t\t  " << p34 << endl;
    cout << m4 << "\t\t\t\t" << p41 << "\t\t\t\t" << p42 << "\t\t\t\t" << p43 << "\t\t\t  " << p44 << endl;
}

int main()
{
    material_property_table();
    return 0;
}
