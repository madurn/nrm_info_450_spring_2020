#include <iostream>
using namespace std;

int main()
{
    int year;
    int check = 0;
    do
    {
        year = 0;
        cout << "Enter a year to determine if it is a leap year: " << endl;
        cin >> year;
        if (year == 0)
        {
            check = 0;
            break;
        }
        else if (year < 400 && year % 4 == 0 && year % 100 != 0)
        {
            cout << "The year " << year << " is a leap year." << endl;
        }
        else if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            cout << "The year " << year << " is a leap year." << endl;
        }
        else
        {
            cout << "The year " << year << " is not a leap year." << endl;
        }
    
    }while (check == 0);
    return 0;
}