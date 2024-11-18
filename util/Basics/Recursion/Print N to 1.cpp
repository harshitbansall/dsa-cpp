#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void f(int cut, int n)
{
    if (cut < 1)
    {
        return;
    }

    cout << cut << endl;
    f(cut - 1, n);
}

int main()
{

    int n;
    cin >> n;
    f(100, n);

    return 0;
}