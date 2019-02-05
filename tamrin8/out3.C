#include <iostream>
using namespace std;
#include <stdio.h>

int original()
{
  int a[] = {12 , 10};
  int& ar = a[0];
  int* ap = a;
 cout << (*a)++/ar << endl;
 cout << (*ap) << endl;
 cout << ((*a+1)) << endl;
  cout << ((*ap)^(*a+1)) << endl;
 cout << *(&*(a+1)) << endl;
}
int main()
{

  original();
  return 0;
}
