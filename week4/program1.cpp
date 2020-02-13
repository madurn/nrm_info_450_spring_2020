#include <iostream>
#include <math.h>
using namespace std;

double enterNumber (int indexNum);
double getMean (double num[]);

int main ()
{
    double tenNum[10];
    double stepTwo[10];
    double mean1;
    double mean2;
    double stdDev;

    for (int i = 0; i < 10; i++)
    {
        tenNum[i] = enterNumber(i);
    }

    mean1 = getMean(tenNum);

    for (int k = 0; k < 10; k++)
    {
        stepTwo[k] = pow ((tenNum[k] - mean1), 2);
    }

    mean2 = getMean(stepTwo);

    stdDev = sqrt(mean2);

    cout << "results, " << mean1 << ", " << stdDev << endl;

    return 0;
}

double enterNumber (int indexNum)
{
    int number;
    cout << "Enter the number for index " << indexNum << ": ";
    cin >> number;
    return number;
}

double getMean (double num[])
{
    double mean = 0;
    double total = 0;

    for (int j = 0; j < 10; j++)
    {
        total += num[j]; 
    }

    mean = total / 10;

    return mean;
}

 