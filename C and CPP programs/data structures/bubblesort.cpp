#include <bits/stdc++.h>
using namespace std;

void swap(int *mp, int *np)
{
    int temp = *mp;
    *mp = *np;
    *np = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void NewArray(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {64, 39, 78, 43, 32, 66, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    NewArray(arr, n);
    return 0;
}