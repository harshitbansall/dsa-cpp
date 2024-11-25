#include <bits/stdc++.h>

using namespace std;

int remove_duplicates_from_sorted(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
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

    int num = remove_duplicates_from_sorted(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    cout << endl
         << num;

    return 0;
}