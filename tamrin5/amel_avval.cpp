#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int x)
{
  if(x==1|| x==0) return false;
    
  for(int i = 2;i<x-1;i++)
      if(x%i == 0)  return false;
  return true;
}

int amel(int a , int i,bool yek)
{
  if (a%i == 0 && is_prime(i))
  {
    //cout << i << " ";
    int n = 0;
    while (a % int(pow(i,n+1)) == 0 )
    {
       n++;
    }
   
    if(!yek)
    {
        if (n>1)  cout << i<< "^" << n ;
            else cout << i;
    }
    if(yek)
    {    
       if (n>1)  cout <<"*"<< i<< "^" << n ;
          else cout <<"*" << i;
    }
    yek = true;   
  }
  if (i <a ) amel(a,i+1,yek);


}

int main()
{
  int a ;
  cin >> a;
  amel(a,2,false);
//  cout <<" \b\b  "<< endl;
  cout << endl;

}
