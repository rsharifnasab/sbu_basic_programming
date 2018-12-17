#include <iostream>

int bmm(long int a , long int b, long int i)
{
	if(a%i==0 && b%i==0) return i;
	return bmm(a,b,i-1);

}

int main()
{
  long int a,b;
  std :: cin >> a >> b;
  std :: cout <<bmm(a,b,a) << std :: endl;

}
