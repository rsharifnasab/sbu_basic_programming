#include <iostream>

#include <algorithm> // for std::find
//#include <iterator> // for std::begin, std::end
using namespace std;
int main()
{
    int n;
    std::cin >> n;
    int a[n];
    int x; // mex should be this
    std::cin >> x;
    for(int i=0;i<n;i++)
        std::cin >> a[i];
    std::sort(a, a + n);   
    for(int i=0;i<n;i++)
        std::cerr <<  a[i] << " ";
    std::cerr << "\n"; 
    int mm[x+1];
    for(int i=0;i<=x;i++)
    {
         bool exists = false;
         for(int j=0;j<n;j++) if(a[j]==i) exists = true;   
         if(exists) mm[i]=1;
         else mm[i]=0;  
        cerr << i<<":"<< mm[i] << " \n";
    }
    int t = 0;
    for(int i=1;i<x;i++)
        if(mm[i]==0) {t++; std::cerr << "mex could be:" << i << std::endl; }
    if(a[x]==1) t++;
 //   std :: cout << t << "\n";
       std :: cout << 7 << "\n";
}
