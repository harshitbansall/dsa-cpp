#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int inputNum;
  cin >> inputNum;

  int dup = inputNum;

  int sum = 0;

  while (inputNum > 0)
  {
    int lastDigit = inputNum % 10;
    inputNum = inputNum / 10;

    sum += pow(lastDigit, 3);
  }

  if (sum == dup)
  {
    cout << "It is an armstrong number.";
  }
  else
  {
    cout << "It is not an armstrong number.";
  }

  return 0;
}