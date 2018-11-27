#include <iostream>
bool is_prime(int x)
{
  for(int i = 2;i<x-1;i++)
  {
    if(x%i == 0)  return false;
  }
  return true;
}

void luca_find(int max,int n,int t_printed,int a1,int a2)
{
    int thiis = a1+a2;
    if(is_prime(thiis))
    {
        std :: cout << thiis <<" ";
        t_printed++;
    }
    if (max > t_printed) luca_find(max,n+1,t_printed,a2,thiis);
}


int main()
{
    
    int a;   
    std :: cin >> a;
    luca_find(a,3,0,2,1);
    std :: cout << std :: endl;
}   