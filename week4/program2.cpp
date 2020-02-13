#include <iostream>
using namespace std;

int main()
{
    char classRoster[30][50];

    for (int i = 0; i < 30; i++)
    {
        char name[50];
        cout << "Please enter student for index " << i << ": ";
        cin.getline(name, 50);
        for (int j = 0; j < sizeof(name); j++)
        {
            classRoster[i][j] = name[j];
        }

        if (classRoster[i][0] == '\0')
        {
            break;
        }
    }

    for (int row = 0; row < 30; row++)
    {
        if (classRoster[row][0] == '\0')
        {
            break;
        }

        cout << "students[" << row << "] = ";
        for (int col = 0; col < 50; col++)
        {
            cout << classRoster[row][col];

            if (classRoster[row][col] == '\0')
            {
                break;
            }
        }
        cout << endl;
    }

    return 0;
}
