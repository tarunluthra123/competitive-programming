#include <bits/stdc++.h>
using namespace std;

void heapify(int *arr, int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    //Assume current is min
    int minIndex = i;
    if (left < n && arr[left] > arr[i])
    {
        minIndex = left;
    }
    if (right < n && arr[right] > arr[minIndex])
    {
        minIndex = right;
    }

    if (minIndex != i)
    {
        swap(arr[i], arr[minIndex]);
        heapify(arr, n, minIndex);
    }
}

void heapSort(int *arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    heapSort(arr, n);

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}