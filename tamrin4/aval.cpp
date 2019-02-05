#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int x)
{
  if(x%2 == 0 && x != 2 ) return false;
  for(int i = 2;i<x-1;i++)
  {
    if(x%i == 0)  return false;
  }
  return true;

}
/*
int amel(int a , int i)
{
  //if (is_prime(i))  cout << i << " ";
  if (a%i == 0 && is_prime(i))
  {
    //cout << i << " ";
    int n = 0;
    while (a % int(pow(i,n+1)) == 0 )
     {
       n++;
    }
    cout << i<< "^" << n << endl;
  }
  if (i > 2) amel(a,i-1);

}

*/
int main()
{
  int a ,b;
  cin >> a >> b;
  bool flag = false;
  for(int i =a+1; i < b; i++ )
        if(is_prime(i)) 
        {
            cout << i << endl;
            flag = true;
        }

  if (flag == false) cout << 0 << endl;
}
