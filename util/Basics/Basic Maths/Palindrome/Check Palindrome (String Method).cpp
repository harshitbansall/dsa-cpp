#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    string before = inputString;

    reverse(inputString.begin(), inputString.end());

    if (inputString == before)
    {
        cout << "It is a palindrome.";
    }
    else
    {
        cout << "It is not a palindrome.";
    }
    return 0;
}