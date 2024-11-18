#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0)
    {
      if (arr[j - 1] > arr[j])
      {
        swap(arr[j - 1], arr[j]);
      }
      j--;
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

  insertion_sort(arr, n);

  for (auto it : arr)
  {
    cout << it << " ";
  }

  return 0;
}