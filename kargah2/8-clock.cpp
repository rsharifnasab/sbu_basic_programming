#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <iomanip>
#include <string>
using namespace std;
int t = 1000000;

int main()
{

//	t = 999999	;
	int h,m,s;
	cin >> h >> m >> s;
	cout << "starting . . ." << endl << endl;
	while(true)
	{
		//printf("%.4d:%.4d:%.4d \n",h,m,s);
		system("clear");
		string sh = (h <10) ? "0" + to_string(h): to_string(h);
		string sm = (m <10) ? "0" + to_string(m): to_string(m);
		string ss = (s <10) ? "0" + to_string(s): to_string(s);
		cout  <<sh << ":"<< sm <<  ":" <<  ss << endl; 
		s++;
		if(s>=60) 
		{
			s =0;
			m++;
		}

		if(m>=60) 
		{
			m =0;
			h++;
		}
		if(h>=24) 
		{
			h =0;
			//h++;
		}		
		usleep(1 * t);
				
	}	
}
