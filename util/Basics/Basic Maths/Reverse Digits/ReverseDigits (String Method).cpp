#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    int inputNum;
    cin >> inputNum;

    bool isNegative;

    if (inputNum < 0)
    {
        isNegative = true;
    }
    else
    {
        isNegative = false;
    }

    string stringNum = to_string(inputNum);

    reverse(stringNum.begin(), stringNum.end());

    if (isNegative)
    {
        cout << "-" << stoi(stringNum);
    }
    else
    {
        cout << stoi(stringNum);
    }

    return 0;
}