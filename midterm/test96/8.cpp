#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i =1;i <= (n*2); i++)
    {
        if(i<=n)
        {
            for(int j=1;j<=(1+n-i);j++) cout << j;
            cout << endl;
        }
        else
        {
            for(int j=1;j<=(i-n);j++) cout << j;
            cout << endl;

        }

    }
}

