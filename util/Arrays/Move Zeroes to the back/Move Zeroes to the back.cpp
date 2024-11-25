#include <bits/stdc++.h>

using namespace std;

void move_all_zeroes_to_end(vector<int> &arr, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && j == -1)
        {
            j = i;
        }
        else if (arr[i] != 0 && j != -1)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
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

    move_all_zeroes_to_end(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}