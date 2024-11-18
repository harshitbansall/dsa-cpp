#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int inputNum;
    cin >> inputNum;

    int before = inputNum;

    int reverseNum = 0;

    while (inputNum > 0)
    {
        int lastDigit = inputNum % 10;
        reverseNum = (reverseNum * 10) + lastDigit;

        inputNum = inputNum / 10;
    }

    if (reverseNum == before)

    {
        cout << "It is a palindrome.";
    }
    else
    {
        cout << "It is not a palindrome.";
    }
    return 0;
}