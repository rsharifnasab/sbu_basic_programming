#include <iostream>
using namespace std;
long double fact(int number)
{
    long double ans = 1;
    for (int i = 1; i <= number; i++)
        ans *= i;
    return ans;
}
double power(int base, int power)
{
    int ans = 1;
    for (int i = 1; i <= power; i++)
        ans *= base;
    return ans;
}
int main()
{
    int x, n;
    double sum = 1;
    cin >> x >> n;
    for (int i = 1; i < n ; i ++)
        sum += power(x, i * 2) / fact(i * 2);
    cout << sum;
}