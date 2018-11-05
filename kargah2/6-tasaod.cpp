#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	if(b/a == c/b && d/c == c/b)
	{
		double di = a/b;
		cout << "succesful " << endl;
		int n;
		cin >> n;
		for(int i = 0;i < n;i++)
		{
			cout << d / di << endl;;
			d /=di;
		}	
	}
	else cout << "NO" << endl;	
}
