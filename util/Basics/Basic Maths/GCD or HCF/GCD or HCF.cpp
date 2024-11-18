#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// GCD / HCF
// Greatest Common Divisor / Highest Common Factor

// Using Euclidean Algorithm :
// gcd (a, b) = gcd (a % b,  b)  where a > b

int main()
{
    int a, b;
    cin >> a >> b;

    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
        cout << b;
    else if (b == 0)
        cout << a;

    return 0;
}