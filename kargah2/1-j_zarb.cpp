#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	for(int i =1;i<=20;i++)
	{
		for(int j = 1;j<=20;j++)
		{
			cout << setw(4) << i*j ; 
		}	
		cout << endl;
	}

}
