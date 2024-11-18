#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

  string str = "123";

  do
  {
    cout << str << endl;
  } while (next_permutation(str.begin(), str.end()));

  return 0;
}