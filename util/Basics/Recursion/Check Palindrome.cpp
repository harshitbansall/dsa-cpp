#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool f(int n, string str)
{
    if (n > str.size() / 2)
        return true;

    if (str.at(n) != str.at(str.size() - n - 1))
        return false;
    else
        return f(n + 1, str);
}

int main()
{

    string str;
    cin >> str;

    cout << f(0, str);

    return 0;
}