//Insertion Sort in CPP

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)             //function to display the elements of arrray
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(int arr[], int n)
{
    int i, val, j;
    for (i = 1; i < n; i++)
    {
        val = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > val)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = val;
    }
}

int main()
{
    int n;
    cout << "Enter number of elements :";
    cin >> n;
    int arr[n];                   //Create an array with given no. of elements
    cout << "Enter elements of array : "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements before Sorting : ";
    display(arr, n);

    cout << "\n";
    insertionSort(arr, n);

    cout << "Array elements after Sorting : ";
    display(arr, n);

    return 0;
}