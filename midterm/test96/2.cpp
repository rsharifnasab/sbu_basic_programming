#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r[23]={0,0,0,0,0};
    srand(time(NULL));
    int max = 19000;
    for(int i=0;i<max;i++)
    {
        int temp = (rand()%5)*4 + 6;    
        r[temp]++;
        cout << temp << " ";
    }
    cout << endl;
    for(int t=0;t<23;t++)
    {       
        if(r[t]>0)cout <<t << ": "<< r[t]<< endl;
    }

}