#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int varoune_biti(int a)
{
	for(int i = 0;i < 32;i++)
	{
		int b = a&1;
		cout << b;
		a = a>>1;
	}
	cout << endl;
}


int t_mabna(int a)
{
	int ans = 0;
	for(int i = 31;i >= 0;i--)
	{
		
		int b = a >> i;
		bool temp = b&1;
		cout << temp;

	}
	cout << endl;
	
	
}


int main()
{
	int my_num = 0;

	for(int i =1;;i++)
	{
	
		cout << "pls enter a command\n  1)num 2)m2 3)vb  4)quit\n"  ;
		int a;
		cin >> a;
		if(a == 1) cin >> my_num;
	    else if(a == 2) t_mabna(my_num);
		else if(a == 3) varoune_biti(my_num);
		else return 0;
 		
	}

}
