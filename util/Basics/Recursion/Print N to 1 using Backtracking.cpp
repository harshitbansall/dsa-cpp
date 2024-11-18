#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void f(int cut, int n)
{
  if (cut > 5)
  {
    return;
  }

  f(cut + 1, n);
  cout << cut << endl;
}

int main()
{

  int n;
  cin >> n;
  f(1, n);

  return 0;
}