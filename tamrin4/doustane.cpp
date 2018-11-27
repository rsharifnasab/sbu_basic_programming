#include <iostream>
#include <cmath>
using namespace std;

bool doost(int a)
{
    for(int i = a; i > 2; i--)
    {
        short int s = 0;
        if(a % i == 0) s++;
        if(a % (i-1) == 0) s++;
        if(a % (i-2) == 0) s++;
        if (s == 3) return true;
     //   cerr << "checking : "<< a << endl << "i = "<<i << endl << "s = " << s << endl;
    }

    return false;

}
int main()
{
  int n,k;
    
  cin >> n >> k;
  bool flag = false;
  for(int i =n+1; i < k; i++ )
  {
        bool doost = false;
     for(int j = i; j > 2; j--)
    {
        short int s = 0;
        if(i % j == 0) s++;
        if(i % (j-1) == 0) s++;
        if(i % (j-2) == 0) s++;
        if (s == 3) doost = true;
     //   cerr << "checking : "<< a << endl << "i = "<<i << endl << "s = " << s << endl;
    }
        if (doost )
        {
            flag = true;
            cout << i << " ";
        }
  }
  if (flag == false)  cout << 0 << endl;
}
