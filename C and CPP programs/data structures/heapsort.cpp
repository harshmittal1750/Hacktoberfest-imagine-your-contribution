#include <iostream>
using namespace std;
void heapify(int arr[], int n, int root)
{
    int big = root;
    int l = 2 * root + 1;
    int r = 2 * root + 2;
    if (l < n && arr[l] > arr[big])
        big = l;
    if (r < n && arr[r] > arr[big])
        big = r;
    if (big != root)
    {
        swap(arr[root], arr[big]);
        heapify(arr, n, big);
    }
}

void heapSort(int arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {

        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int heaparr[] = {34, 12, 9, 11, 5, 14};
    int n = sizeof(heaparr) / sizeof(heaparr[0]);
    cout << "Input array is " << endl;
    printArray(heaparr, n);
    heapSort(heaparr, n);
    cout << "Required Sorted array is " << endl;
    printArray(heaparr, n);
}