#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void f(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }

    sum += n;
    f(n - 1, sum);
}

int main()
{
    int sum = 0;
    int n;
    cin >> n;
    f(n, sum);

    return 0;
}