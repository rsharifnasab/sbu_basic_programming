#include <iostream>
using namespace std;
int main()
{
    int inp;
    cin >> inp; 
   for(int a=1,n=1;a <= inp;n++)
    {
        a = n*n + (n-1) * (n-1);
        if(a == inp){ cout << n << endl; return 0; }
    }
    cout << 0 << endl;
}
