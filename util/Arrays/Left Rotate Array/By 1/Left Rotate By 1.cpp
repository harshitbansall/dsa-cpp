#include <bits/stdc++.h>

using namespace std;

void left_rotate_by_one(vector<int> &arr, int n)
{
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;
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

    left_rotate_by_one(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}