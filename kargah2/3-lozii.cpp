#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;




int main()
{
	int my_num = 0;
	cin >> my_num;
	for(int i =1;i<my_num;i++)
	{
		for(int j=my_num-i;j>0;j--) cout << " ";	
		for(int j=0;j<i;j++){cout <<"* ";}
 		cout << endl;
	}
	for(int i=0;i<my_num;i++){cout <<"* ";}
	cout << endl;
	for(int i =1;i<my_num;i++)
	{
		for(int j=i;j>0;j--) cout << " ";	
		for(int j=0;j<my_num-i;j++){cout <<"* ";}
 		cout << endl;
	}
	
}
