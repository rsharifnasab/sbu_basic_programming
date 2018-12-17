#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int a[n];
    int x; // mex should be this
    std::cin >> x;
    for(int i=0;i<n;i++)
        std::cin >> a[i];
    int mm[x+1];
    for(int i=0;i<=x;i++)
    {
         bool exists = false;
         for(int j=0;j<n;j++) if(a[j]==i) exists = true;   
         mm[i]=exists;
        std::cerr << i<<":"<< mm[i] << " \n";
    }
    int t = 0;
    for(int i=0;i<x;i++)
        if(mm[i]==0) {t++; std::cerr << "mex could be:" << i << std::endl; }
    if(1==mm[x]) t++;
    std :: cout << t << "\n";
}
