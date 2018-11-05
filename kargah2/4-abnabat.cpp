#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;



int abnt =0;
int pst;

bool abn(int m,int p)
{
	abnt+=m; // buy candy
	p+=m; // convert candy to pst
	//m =0;
	m = ((p-(p%pst)) / pst); //convert pst t 1 money
	if(m>0)abn(m,p%pst); // if it has money anymore .. 
}

int main()
{
	int my_num = 0;
	cin >> my_num;
	//int pst;
	cin >> pst;
	abn(my_num,0);	
	cout << abnt;
}
