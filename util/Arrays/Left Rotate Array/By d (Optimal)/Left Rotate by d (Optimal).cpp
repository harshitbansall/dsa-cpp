#include <bits/stdc++.h>

using namespace std;

void left_rotate_by_d(vector<int> &arr, int n, int d)
{

    if (d >= n)
    {
        d = d % n;
    }

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    int n;
    cin >> n;

    int d;
    cin >> d;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    left_rotate_by_d(arr, n, d);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}