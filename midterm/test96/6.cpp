#include <bits/stdc++.h>
using namespace std;
int simple(int a, double d)
{
    d=a;
    printf("%.0f\n",a+d);
}
int main()
{
    int a = 1 , d=2;
    simple(a,d);
    simple(a,a);
    printf("%d",a+d);
    return 0;
}

