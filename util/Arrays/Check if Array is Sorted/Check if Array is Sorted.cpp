#include <bits/stdc++.h>

using namespace std;

bool check_if_sorted(vector<int> &arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    cout << check_if_sorted(arr, n) << endl;

    return 0;
}