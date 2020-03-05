#include <iostream>  
#include <cstring>  
using namespace std;

string reverse(string *s1);
int main()
{
    bool noBlank = true;
    while (noBlank)
    {
        string str1;
        string str2;
        cout << "Please enter a word, phrase or sentence to be reversed." << endl;
        getline(cin, str1);
    
        if (str1.empty() == 1)
        {
            cout << "You have entered nothing." << endl;
            noBlank = false;
        }
        else
        {
            cout << "You entered: " << str1 << endl;
            str2 = reverse(&str1);
            cout << "Reversed: " << str2 << endl;
        }
    }

    return 0;
}

string reverse(string *s1)
{
    string strR1 = *s1;
    string strR2 = "";
    int length = s1->length();

    for (int i = 1; i < length + 1; i++)
    {
       strR2 = strR2 + strR1[length - i];
    }

    return strR2;
}


