#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int inputNum;
    cin >> inputNum;

    int numberOfDigits = 0;

    while (inputNum > 0)
    {
        inputNum = inputNum / 10;
        numberOfDigits++;
    }

    cout << numberOfDigits;

    return 0;
}