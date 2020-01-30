#include <iostream>
using namespace std;

int main()
{
    int number;
    bool check = true;
    while (check == true)
    {
        number = 0;
        cout << "Enter a value to determine if it is a prime number: " << endl;
        cin >> number;
        if (number == 0)
        {
            check = false;
        }
        if (number < 0)
        {
            cout << "the number " << number << " is negative." << endl;
            continue;
        }
        else if (number == 1)
        {
            cout << "The number " << number << " is not a prime number." << endl;
        }
        else if (number % 2 == 0 && number != 2)
        {
            cout << "The number " << number << " is not a prime number." << endl;
        }
        else if (number > 0)
        {
            bool prime = true;
            for (int i = 2; i < number / 2; i++)
            {
                if (number % i == 0)
                {
                    prime = false;
                    cout << "The number " << number << " is not a prime number." << endl;
                    break;
                }   
            }
            if (prime == true)
            {
                cout << "The number " << number << " is a prime number." << endl;
            }
        }
    }
    return 0;
}