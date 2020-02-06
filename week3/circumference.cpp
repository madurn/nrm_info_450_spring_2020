#include <iostream>
using namespace std;

const double pi = 3.14159265358979323846;
double getRadius();
double calculateCircumference(double radius);

int main()
{
    double radius = 0;
    double circumference = 0;

    radius = getRadius();
    circumference = calculateCircumference(radius);
    cout << "The circumference of the circle is " << circumference << "." << endl;

    return 0;
}
double getRadius()
{
    int r;
    cout << "Please enter the radius of a circle: " << endl;
    cin >> r;
    return r;
}
double calculateCircumference(double radius)
{
    double circum;
    circum = 2 * pi * radius;
    return circum;
}

