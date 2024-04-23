#include <iostream>
using namespace std;

// Function to determine the type of triangle
string triangleType(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        return "NotATriangle";
    else if (a == b && b == c)
        return "Equilateral";
    else if (a == b || b == c || a == c)
        return "Isosceles";
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        return "RightTriangle";
    else
        return "Scalene";
}

int main() {
    int side1, side2, side3;
    
    // Input the sides of the triangle
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    
    // Determine the type of triangle
    string type = triangleType(side1, side2, side3);
    
    // Output the result
    cout << "The triangle is: " << type << endl;
    
    return 0;
}
