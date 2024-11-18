#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Takes Integer input > converts to string > prints integer individual character

int main()
{
  int inputNum;
  cin >> inputNum;

  string stringNum = to_string(inputNum);

  for (auto num : stringNum)
  {
    int intNum = num - '0';
    cout << intNum << endl;
  }

  return 0;
}