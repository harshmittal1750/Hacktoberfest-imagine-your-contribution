#include <iostream>
#include <cmath>

using namespace std;

int BinaryToDecimal(long long);

int BinaryToDecimal(long long n)
{
    int decimalnum = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        decimalnum += rem * pow(2, i);
        ++i;
    }
    return decimalnum;
}
int main()
{
    long long n;

    cout << "Enter Binary number: \n";
    cin >> n;

    cout << "Decimal Number is : " << BinaryToDecimal(n);
    return 0;
}
