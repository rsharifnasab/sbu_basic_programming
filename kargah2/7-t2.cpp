#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

bool t2c(int a)
{
	int sum = 0;
	for(int i = 0;i < 32;i++)
	{
		int b = a&1;
		sum+= b;
		a = a>>1;
	}
	return (sum==1)?true:false;
}

bool close()
{
	exit(0);
	return true;
}
bool co(int a)
{
	cout << a << endl;
	close();
	return true;
}
bool ce(int a,int i)
{

	int b  = (t2c(a))? (co(i)): 1==1 ;

}
int main()
{
	int a;
	cin >> a;
	//cout << t2c(a);
	for(int i=0;;i++)
	{
		ce(a+i,i);
		ce(a-i,i);
	
	}
}
