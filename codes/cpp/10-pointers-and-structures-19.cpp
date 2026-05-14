/*
10. Implement pointers and references, call by reference, and structures in C++.

Practice Exercise 19: Write a program to calculate the area of a rectangle and a circle using pointers.

```cpp
include <iostream>
using namespace std;

int main() {
    // Pointer example
    int *ptr = new int;  // dynamic initialization
    *ptr = 10;

    // Reference example
    int variable = 20;
    int &ref = variable;

    // Display values
    cout << *ptr << "\n";
    cout << ref << "\n";

    // Free memory
    delete ptr;

    return 0;
}
```

Code:
*/

#include <iostream>
using namespace std;

int main()
{
    // Simple variables for rectangle dimensions
    double l, b;

    // Pointers to these variables
    double *length = &l;
    double *breadth = &b;

    // Dynamic initialization for circle radius
    double *radius = new double;

    // Input for rectangle
    cout << "Enter length of rectangle: ";
    cin >> *length;
    cout << "Enter breadth of rectangle: ";
    cin >> *breadth;

    // Input for circle (dynamic initialization)
    cout << "Enter radius of circle: ";
    cin >> *radius;

    // Calculate areas
    double rectArea = (*length) * (*breadth);
    double circleArea = 3.14159 * (*radius) * (*radius);

    // Display results
    cout << "\nArea of Rectangle: " << rectArea;
    cout << "\nArea of Circle: " << circleArea << endl;

    // Free dynamically allocated memory
    delete radius;

    return 0;
}

/*
Output:
Enter length of rectangle: Enter breadth of rectangle: Enter radius of circle: 
Area of Rectangle: 6
Area of Circle: 50.2654
*/