#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;




int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	for(int i=0;i<a;i++)
	{
		if(i%2==0) 
		{
			for(int j=0;j<b;j++)cout << "#";
			cout <<endl;
		}
		else if(i%4==1) 
		{
			for(int j=1;j<b;j++)cout << "-";
			cout << "#\n";
		}
		
		else if(i%4==3) 
		{
			cout << "#";
			for(int j=1;j<b;j++)cout << "-";		
			cout << endl;
		
	
		}
	}	
}
