#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key, start, end, flag;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int a[n];
    start = 0;
    flag = 0;
    end = n;
    for (auto i = 0; i != n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to be Searched" << endl;
    cin >> key;
    while (start <= end)
    {
        int m = start + (end - start) / 2;

        if (a[m] == key)
            flag = 1;

        if (a[m] < key)
            start = m + 1;
        else
            end = m - 1;
    }

    if (flag == 1)
    {
        cout << key << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }
}