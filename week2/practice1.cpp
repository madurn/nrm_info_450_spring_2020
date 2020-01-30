#include <iostream>
using namespace std;

int main()
{
    double number;
    double square;
    bool check = 1;
    while (check == 1)
    {
        number = 0;
        square = 0;
        cout << "Enter a positive value: " << endl;
        cin >> number;
        if (number > 0)
        {
            square = number * number;
            cout << "The square of " << number << " is " << square << "." <<endl;
            continue;
        }
        else if (number < 0)
        {
            cout << "You have entered a negative value." <<endl;
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}