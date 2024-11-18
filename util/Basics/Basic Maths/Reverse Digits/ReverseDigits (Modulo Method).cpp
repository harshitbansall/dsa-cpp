#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Takes input and applies Modulo function until number becomes 0
// This extracts the end digits and prints them.

int main()
{
    int inputNum;
    cin >> inputNum;

    int reverseNum = 0;

    while (inputNum > 0)
    {
        int lastDigit = inputNum % 10;
        inputNum = inputNum / 10;

        reverseNum = (reverseNum * 10) + lastDigit;
    }

    cout << reverseNum;

    return 0;
}