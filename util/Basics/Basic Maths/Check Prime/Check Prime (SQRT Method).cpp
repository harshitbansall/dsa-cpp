#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// PRIME NUMBER DEFINITION : A number with only 2 factors (1 and itself)

int main()
{
    int inputNum;
    cin >> inputNum;

    int factorCount = 0;

    for (int i = 1; i * i <= inputNum; i++)
    {
        if (inputNum % i == 0)
        {
            factorCount++;
            if (inputNum / i != i)
            {
                factorCount++;
            }
        }
    }

    if (factorCount == 2)
    {
        cout << "The number is a prime number.";
    }
    else
    {
        cout << "The number is not a prime number.";
    }

    return 0;
}