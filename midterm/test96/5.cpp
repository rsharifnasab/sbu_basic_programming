#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a,b;
    cin >> a >> b;
    char start = (a<=b)?a:b;
    char finish = a+b-start;
    do{
        cout << start++;
    }while(start<=finish);
    cout << endl;
}

