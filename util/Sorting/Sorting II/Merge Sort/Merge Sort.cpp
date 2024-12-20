#include <bits/stdc++.h>

using namespace std;

// THIS FUNCTION WOULD TAKE 2 SUBARRAYS AND MERGE THEM IN A SORTED ORDER

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// THIS IS A RECURSIVE FUNCTION WHICH HYPOTHETICALLY DIVIDES THE ARRAY INTO 2 FROM THE MIDDLE UNTILL A SINGLE ITEM IS LEFT

void merge_sort(vector<int> &arr, int low, int high)
{

    if (low == high)
        return;

    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

// INPUT TAKING AND MAIN FUNCTION

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    merge_sort(arr, 0, n - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}