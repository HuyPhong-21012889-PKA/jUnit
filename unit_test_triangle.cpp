#include <iostream>
#include <cassert>
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

void testTriangleType() {
    // Test cases for Equilateral triangles
    assert(triangleType(5, 5, 5) == "Equilateral");

    // Test cases for Isosceles triangles
    assert(triangleType(5, 5, 8) == "Isosceles");
    assert(triangleType(8, 5, 5) == "Isosceles");
    assert(triangleType(5, 8, 5) == "Isosceles");

    // Test cases for Scalene triangles
    assert(triangleType(7, 8, 9) == "Scalene");
    assert(triangleType(3, 9, 11) == "Scalene");

    // Test cases for Right triangles
    assert(triangleType(3, 4, 5) == "RightTriangle");
    assert(triangleType(5, 12, 13) == "RightTriangle");

    // Test case for Not a Triangle
    assert(triangleType(1, 1, 2) == "NotATriangle");

    cout << "All test cases passed successfully!" << endl;
}

int main() {
    testTriangleType();

    return 0;
}
