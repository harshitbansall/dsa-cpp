#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int inputNum;
    cin >> inputNum;

    vector<int> ls;

    for (int i = 1; i <= sqrt(inputNum); i++)
    {
        if (inputNum % i == 0)
        {
            ls.push_back(i);
            if (inputNum / i != i)
            {
                ls.push_back(inputNum / i);
            }
        }
    }

    sort(ls.begin(), ls.end());

    for (auto it : ls)
        cout << it << " ";

    return 0;
}