/*
10. Implement pointers and references, call by reference, and structures in C++.

Practice Exercise 20: Write a program to calculate the area of a rectangle and a circle using call by reference, and structures.

```cpp
include <iostream>
include <string>
using namespace std;

// Structure example
struct Sample {
    string name;
    double value;
};

// Function with call by reference
void modifyValue(Sample &s) {
    s.value = s.value * 2;  // Example modification
}

// Function to demonstrate string operations
void appendText(string &text) {
    text.append("_extra");
}

int main() {
    Sample obj1, obj2;
    
    // Input for first object
    cout << "Enter name: ";
    cin >> obj1.name;
    cout << "Enter value: ";
    cin >> obj1.value;

    // Assign name of obj1 to obj2 using assign()
    obj2.name.assign(obj1.name);
    obj2.value = obj1.value + 5;

    // Modify using function (call by reference)
    modifyValue(obj1);

    // String operation
    appendText(obj1.name);

    // Build output message using concatenation
    string message = string("First: ") + obj1.name + " | Second: " + obj2.name;

    // Output
    cout << message << "\n";
    cout << "Updated value (obj1): " << obj1.value << "\n";
    cout << "Value (obj2): " << obj2.value << "\n";

    return 0;
}
```

Code:
*/

#include <iostream>
#include <string>
using namespace std;

// Structure for Rectangle
struct Rectangle
{
    string unit;
    double length;
    double breadth;
};

// Structure for Circle
struct Circle
{
    string unit;
    double radius;
};

// Append "²" to unit
void makeAreaUnit(string &unit)
{
    unit.append("²"); // Using string::append()
}

// Calculate rectangle area using call by reference
double calcRectangleArea(Rectangle &r)
{
    return r.length * r.breadth;
}

// Calculate circle area using call by reference
double calcCircleArea(Circle &c)
{
    return 3.14159 * c.radius * c.radius;
}

int main()
{
    Rectangle rect;
    Circle cir;

    // Input base unit
    cout << "Enter unit for measurements (e.g., cm or m): ";
    cin >> rect.unit;

    // Use string::assign() instead of direct =
    cir.unit.assign(rect.unit);

    // Input rectangle dimensions
    cout << "Enter length of rectangle (" << rect.unit << "): ";
    cin >> rect.length;
    cout << "Enter breadth of rectangle (" << rect.unit << "): ";
    cin >> rect.breadth;

    // Input circle radius
    cout << "Enter radius of circle (" << cir.unit << "): ";
    cin >> cir.radius;

    // Append "²" to units for area
    makeAreaUnit(rect.unit);
    makeAreaUnit(cir.unit);

    // Build output strings using concatenation
    string rectMsg = string("Area of Rectangle in ") + rect.unit + " = " + to_string(calcRectangleArea(rect));
    string cirMsg = string("Area of Circle in ") + cir.unit + " = " + to_string(calcCircleArea(cir));

    // Display results
    cout << "\n" << rectMsg << "\n" << cirMsg << endl;

    return 0;
}

/*
Output:
Enter unit for measurements (e.g., cm or m): Enter length of rectangle (m): Enter breadth of rectangle (m): Enter radius of circle (m): 
Area of Rectangle in m² = 6.000000
Area of Circle in m² = 50.265440
*/