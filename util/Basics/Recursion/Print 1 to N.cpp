#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void f(int cut, int n)
{
    if (cut >= n)
    {
        return;
    }

    cout << cut + 1 << endl;
    cut++;
    f(cut, n);
}

int main()
{

    int n;
    cin >> n;
    f(0, n);

    return 0;
}