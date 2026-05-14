/*
9. Demonstrate file handling in C++.

Practice Exercise 18: Write a program to find the properties of a material from the tensile test by providing the load, elongation, and geometrical properties of a specimen by using functions, arrays, and iterative statements with the choice of getting input from sample sets of readings obtained from a text (.txt) file or user entered values.

```cpp
include <iostream>
include <fstream>
include <string>
using namespace std;

int main() {
    int choice;
    string path, data;

    cout << "\nMenu:";
    cout << "\n1. Read from File";
    cout << "\n2. Input by User";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nEnter file path: ";
        cin >> path;

        ifstream inputFile(path);
        if (!inputFile) {
            cout << "Error opening file!";
            return 1;
        }

        // Read data from file
        while (getline(inputFile, data)) {
            cout << data << "\n";
        }

        inputFile.close();
    } 
    else if (choice == 2) {
        cout << "\nEnter some data: ";
        cin.ignore();  // To clear buffer
        getline(cin, data);

        ofstream outputFile("output.txt");
        if (!outputFile) {
            cout << "Error creating file!";
            return 1;
        }

        outputFile << data;
        outputFile.close();
        cout << "Data saved to output.txt";
    } 
    else {
        cout << "Invalid choice!";
    }

    return 0;
}
```

Code:
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int i, j, n, choice;
    string name, path;
    float od, ol, oa, pr;
    float r[20][8]; // Adjusted size to fit all required calculations

    cout << "\n\t\t\t----------------------------------";
    cout << "\n\t\t\t  Menu for Inputting Sample Sets";
    cout << "\n\t\t\t----------------------------------";
    cout << "\n1. From File";
    cout << "\n2. By User";
    cout << "\nEnter Your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\n=>Readings are stored in a file";
        //        cout << "\nNote: Please use (\\) instead of (\\) while specifying the file path";
        cout << "\nPlease Specify the File Path with Extension: ";
        cin >> path;
        ifstream file(path);

        cout << "\n\t\t\t--------------------------------------";
        cout << "\n\t\t\t  Tensile Test: Material Properties";
        cout << "\n\t\t\t--------------------------------------";
        cout << "\n=>Given Data:";
        file >> name;
        cout << "\nName of Material: " << name;
        file >> od;
        cout << "\nOriginal Diameter(mm): " << od;
        file >> ol;
        cout << "\nOriginal Length(mm): " << ol;
        file >> oa;
        cout << "\nOriginal Cross-Sectional Area(mm^2): " << oa;
        file >> pr;
        cout << "\nPoisson's Ratio: " << pr;
        cout << "\n\t\t\t**Tensile Test Outcome**";
        file >> n;
        cout << "\nReadings Acquired During Test: " << n;

        for (i = 0; i < n; i++)
        {
            file >> r[i][0]; // Load
            file >> r[i][1]; // Elongation
        }
        file.close();
    }
    else if (choice == 2)
    {
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
    }
    else
    {
        cout << "\nChoice is wrong";
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        r[i][3] = r[i][1] / ol;
        r[i][4] = r[i][3] * pr;
        r[i][5] = r[i][4] * od;
        r[i][6] = r[i][3] * 100;
        r[i][7] = (1 - (((M_PI * pow((od - r[i][5]), 2)) / 4) / oa)) * 100;
        r[i][2] = (r[i][0] * 1000 / ((M_PI * pow(od - r[i][5], 2)) / 4));
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

/*
Output:

			----------------------------------
			  Menu for Inputting Sample Sets
			----------------------------------
1. From File
2. By User
Enter Your Choice: 
Choice is wrong
*/