/*
7. Illustrate the implementation of decision control in C++.

Practice Exercise 15: Write a program for metric conversions of various properties: temperature, pressure, length, energy, and power using a switch statement.

```cpp
include <iostream>
include <iomanip>
using namespace std;

int main() {
    int variable1, variable2;

    cin >> variable1 >> variable2;

    switch (variable1) {
        case 1:
            switch (variable2) {
                case 10:
                    cout << fixed << setprecision(2);
                    cout << "First = 1 and Second = 10, Value: " << 3.14159;
                    break;
                case 20:
                    cout << fixed << setprecision(3);
                    cout << "First = 1 and Second = 20, Value: " << 2.71828;
                    break;
                default:
                    cout << "First = 1 and Second = Other";
            }
            break;

        case 2:
            cout << fixed << setprecision(4);
            cout << "First = 2, Value: " << 1.23456;
            break;

        default:
            cout << "Other value for First";
    }

    return 0;
}
```

Code:
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int choice;
    float tempC, tempF, tempK, pressurePa, pressureBar, pressureTorr, lengthM, lengthCM, lengthMM, energyJ, energyC, powerW, powerHP;
    char subChoice;

    // Display main menu
    cout << "\n\t\t\t-------------------";
    cout << "\n\t\t\t  Metric Conversion";
    cout << "\n\t\t\t-------------------";
    cout << "\n***Please Choose the Required Metric Conversion***";
    cout << "\nAvailable Metric Conversions are:";
    cout << "\n1. Temperature\n2. Pressure\n3. Length\n4. Energy & Power";
    cout << "\nEnter Your Choice by Numeral Value: ";
    cin >> choice;
    system("cls");

    switch (choice)
    {
    case 1:
        // Temperature conversion
        cout << "\n\t\t\t-------------------------------";
        cout << "\n\t\t\t  Temperature Metric Conversion";
        cout << "\n\t\t\t-------------------------------";
        cout << "\n->Available Conversions:";
        cout << "\nA. Celsius to Fahrenheit\nB. Fahrenheit to Celsius\nC. Celsius to Kelvin\nD. Kelvin to Celsius";
        cout << "\nEnter Your Choice by Character Constant: ";
        cin >> subChoice;
        system("cls");

        switch (subChoice)
        {
        case 'A':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Celsius to Fahrenheit Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of temperature(Celsius): ";
            cin >> tempC;
            tempF = (tempC * 9 / 5) + 32;
            cout << fixed << setprecision(2) << "\n"
                 << tempC << " Celsius = " << tempF << " Fahrenheit" << endl;
            break;
        case 'B':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Fahrenheit to Celsius Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of temperature(Fahrenheit): ";
            cin >> tempF;
            tempC = (tempF - 32) * (5 / 9);
            cout << fixed << setprecision(2) << "\n"
                 << tempF << " Fahrenheit = " << tempC << " Celsius" << endl;
            break;
        case 'C':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Celsius to Kelvin Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of temperature(Celsius): ";
            cin >> tempC;
            tempK = tempC + 273.15;
            cout << fixed << setprecision(2) << "\n"
                 << tempC << " Celsius = " << tempK << " Kelvin" << endl;
            break;
        case 'D':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Kelvin to Celsius Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of temperature(Kelvin): ";
            cin >> tempK;
            tempC = tempK - 273.15;
            cout << fixed << setprecision(2) << "\n"
                 << tempK << " Kelvin = " << tempC << " Celsius" << endl;
            break;
        default:
            cout << "\nChoice is Wrong";
            break;
        }
        break;

    case 2:
        // Pressure conversion
        cout << "\n\t\t\t-------------------------------";
        cout << "\n\t\t\t  Pressure Metric Conversion";
        cout << "\n\t\t\t-------------------------------";
        cout << "\n->Available Conversions:";
        cout << "\nA. Pascal to Bar\nB. Bar to Pascal\nC. Pascal to Torr\nD. Torr to Pascal";
        cout << "\nEnter Your Choice by Character Constant: ";
        cin >> subChoice;
        system("cls");

        switch (subChoice)
        {
        case 'A':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Pascal to Bar Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of pressure(Pascal): ";
            cin >> pressurePa;
            pressureBar = pressurePa * 0.00001;
            cout << fixed << setprecision(2) << "\n"
                 << pressurePa << " Pascal = " << pressureBar << " Bar" << endl;
            break;
        case 'B':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Bar to Pascal Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of pressure(Bar): ";
            cin >> pressureBar;
            pressurePa = pressureBar * 100000;
            cout << fixed << setprecision(2) << "\n"
                 << pressureBar << " Bar = " << pressurePa << " Pascal" << endl;
            break;
        case 'C':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Pascal to Torr Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of pressure(Pascal): ";
            cin >> pressurePa;
            pressureTorr = pressurePa * 0.00750062;
            cout << fixed << setprecision(2) << "\n"
                 << pressurePa << " Pascal = " << pressureTorr << " Torr" << endl;
            break;
        case 'D':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Torr to Pascal Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of pressure(Torr): ";
            cin >> pressureTorr;
            pressurePa = pressureTorr * 133.322;
            cout << fixed << setprecision(2) << "\n"
                 << pressureTorr << " Torr = " << pressurePa << " Pascal" << endl;
            break;
        default:
            cout << "\nChoice is Wrong";
            break;
        }
        break;

    case 3:
        // Length conversion
        cout << "\n\t\t\t-------------------------------";
        cout << "\n\t\t\t  Length Metric Conversion";
        cout << "\n\t\t\t-------------------------------";
        cout << "\n->Available Conversions:";
        cout << "\nA. Meter to Centimeter\nB. Centimeter to Meter\nC. Meter to MilliMeter\nD. MilliMeter to Meter";
        cout << "\nEnter Your Choice by Character Constant: ";
        cin >> subChoice;
        system("cls");

        switch (subChoice)
        {
        case 'A':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Meter to Centimeter Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of length(Meter): ";
            cin >> lengthM;
            lengthCM = lengthM * 100;
            cout << fixed << setprecision(2) << "\n"
                 << lengthM << " m = " << lengthCM << " cm" << endl;
            break;
        case 'B':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Centimeter to Meter Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of length(Centimeter): ";
            cin >> lengthCM;
            lengthM = lengthCM * 0.01;
            cout << fixed << setprecision(2) << "\n"
                 << lengthCM << " cm = " << lengthM << " m" << endl;
            break;
        case 'C':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Meter to MilliMeter Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of length(Meter): ";
            cin >> lengthM;
            lengthMM = lengthM * 1000;
            cout << fixed << setprecision(2) << "\n"
                 << lengthM << " m = " << lengthMM << " mm" << endl;
            break;
        case 'D':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  MilliMeter to Meter Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of length(Millimeter): ";
            cin >> lengthMM;
            lengthM = lengthMM * 0.001;
            cout << fixed << setprecision(2) << "\n"
                 << lengthMM << " mm = " << lengthM << " m" << endl;
            break;
        default:
            cout << "\nChoice is Wrong";
            break;
        }
        break;

    case 4:
        // Energy & Power conversion
        cout << "\n\t\t\t-------------------------------";
        cout << "\n\t\t\t  Energy & Power Metric Conversion";
        cout << "\n\t\t\t-------------------------------";
        cout << "\n->Available Conversions:";
        cout << "\nA. Joule to Calorie\nB. Calorie to Joule\nC. Watt to Horsepower\nD. Horsepower to Watt";
        cout << "\nEnter Your Choice by Character Constant: ";
        cin >> subChoice;
        system("cls");

        switch (subChoice)
        {
        case 'A':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Joule to Calorie Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of energy(Joule): ";
            cin >> energyJ;
            energyC = energyJ * 0.2390057;
            cout << fixed << setprecision(2) << "\n"
                 << energyJ << " Joule = " << energyC << " Calorie" << endl;
            break;
        case 'B':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Calorie to Joule Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of energy(Calorie): ";
            cin >> energyC;
            energyJ = energyC * 4.184;
            cout << fixed << setprecision(2) << "\n"
                 << energyC << " Calorie = " << energyJ << " Joule" << endl;
            break;
        case 'C':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Watt to Horsepower Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of power(Watt): ";
            cin >> powerW;
            powerHP = powerW * 0.00134102;
            cout << fixed << setprecision(2) << "\n"
                 << powerW << " Watt = " << powerHP << " Horsepower" << endl;
            break;
        case 'D':
            cout << "\n\t\t\t-------------------------------";
            cout << "\n\t\t\t  Horsepower to Watt Converter";
            cout << "\n\t\t\t-------------------------------";
            cout << "\nEnter the value of power(Horsepower): ";
            cin >> powerHP;
            powerW = powerHP * 745.69987;
            cout << fixed << setprecision(2) << "\n"
                 << powerHP << " Horsepower = " << powerW << " Watt" << endl;
            break;
        default:
            cout << "\nChoice is Wrong";
            break;
        }
        break;

    default:
        cout << "\nChoice is Wrong";
        break;
    }

    return 0;
}
