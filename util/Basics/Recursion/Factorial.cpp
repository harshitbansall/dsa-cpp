#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int f(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * f(n - 1);
}

int main()
{
  int n;
  cin >> n;

  int factorial = f(n);
  cout << factorial;

  return 0;
}