#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }

        // BASICALLY IF THE ARRAY IS ALREADY SORTED WHICH IS THE BEST CASE SCENARIO : WE WILL END THIS LOOP AND THE CODE IS NOW OPTIMIZED

        if (didSwap == 0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}