/*
3. Illustrate the user interaction with a program in C++.

Practice Exercise 3: Write a program to draw a material property table for four materials using values entered by the user.

```cpp
include <iostream>
using namespace std;

int main() {
    // declare variables
    int variable;

    // take input using cin
    cin >> variable;

    // display output using cout with escape sequences
    cout << variable;

    return 0;
}
```

Code:
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     char m1[20], m2[20], m3[20], m4[20];
     float p11, p12, p13, p14, p21, p22, p23, p24, p31, p32, p33, p34, p41, p42, p43, p44;

     cout << "Enter the Name of first Material: ";
     cin >> m1;
     cout << "\nEnter the Name of second Material: ";
     cin >> m2;
     cout << "\nEnter the Name of third Material: ";
     cin >> m3;
     cout << "\nEnter the Name of fourth Material: ";
     cin >> m4;

     cout << "\n\t\t\t\t-----------------";
     cout << "\n\t\t\t\t Data for " << m1;
     cout << "\n\t\t\t\t-----------------\n";
     cout << "\nEnter the Modulus of Elasticity(E) in GPa: ";
     cin >> p11;
     cout << "\nEnter the Modulus of Rigidity(G) in GPa: ";
     cin >> p12;
     cout << "\nEnter the Poisson's Ratio(v): ";
     cin >> p13;
     cout << "\nEnter the Unit Weight(w) in kN/m^3: ";
     cin >> p14;

     cout << "\n\t\t\t\t-----------------";
     cout << "\n\t\t\t\t Data for " << m2;
     cout << "\n\t\t\t\t-----------------\n";
     cout << "\nEnter the Modulus of Elasticity(E) in GPa: ";
     cin >> p21;
     cout << "\nEnter the Modulus of Rigidity(G) in GPa: ";
     cin >> p22;
     cout << "\nEnter the Poisson's Ratio(v): ";
     cin >> p23;
     cout << "\nEnter the Unit Weight(w) in kN/m^3: ";
     cin >> p24;

     cout << "\n\t\t\t\t-----------------";
     cout << "\n\t\t\t\t Data for " << m3;
     cout << "\n\t\t\t\t-----------------\n";
     cout << "\nEnter the Modulus of Elasticity(E) in GPa: ";
     cin >> p31;
     cout << "\nEnter the Modulus of Rigidity(G) in GPa: ";
     cin >> p32;
     cout << "\nEnter the Poisson's Ratio(v): ";
     cin >> p33;
     cout << "\nEnter the Unit Weight(w) in kN/m^3: ";
     cin >> p34;

     cout << "\n\t\t\t\t-----------------";
     cout << "\n\t\t\t\t Data for " << m4;
     cout << "\n\t\t\t\t-----------------\n";
     cout << "\nEnter the Modulus of Elasticity(E) in GPa: ";
     cin >> p41;
     cout << "\nEnter the Modulus of Rigidity(G) in GPa: ";
     cin >> p42;
     cout << "\nEnter the Poisson's Ratio(v): ";
     cin >> p43;
     cout << "\nEnter the Unit Weight(w) in kN/m^3: ";
     cin >> p44;

     cout << "\n\t\t\t\t\t\t-------------------------------";
     cout << "\n\t\t\t\t\t\t    Material Property Table";
     cout << "\n\t\t\t\t\t\t-------------------------------\n";
     cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------";
     cout << "\nMaterial\t\tModulus of Elasticity(E)\t\tModulus of Rigidity(G)\t\tPoisson's Ratio(v)\t\tUnit Weight(w)\n\t\t\t\tGPa\t\t\t\t\tGPa\t\t\t\t\t\t\t  kN/m^3";
     cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------\n";
     cout << "\n"
          << m1 << "\t\t\t\t" << fixed << setprecision(1) << p11 << "\t\t\t\t\t\t\t" << p12 << "\t\t\t\t" << setprecision(3) << p13 << "\t\t\t  " << setprecision(1) << p14;
     cout << "\n"
          << m2 << "\t\t\t\t" << p21 << "\t\t\t\t" << p22 << "\t\t\t\t\t\t" << setprecision(3) << p23 << "\t\t\t  " << setprecision(1) << p24;
     cout << "\n"
          << m3 << "\t\t\t\t" << fixed << setprecision(1) << p31 << "\t\t\t\t\t" << p32 << "\t\t\t\t\t\t" << setprecision(3) << p33 << "\t\t\t  " << setprecision(1) << p34;
     cout << "\n"
          << m4 << "\t\t\t\t" << fixed << setprecision(1) << p41 << "\t\t\t\t\t" << p42 << "\t\t\t\t\t\t" << setprecision(3) << p43 << "\t\t\t  " << setprecision(1) << p44;

     cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------";

     return 0;
}
