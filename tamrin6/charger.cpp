#include <iostream>
long long int t=1;
bool swap(long long int &a ,long long int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
long long int opt(long long int a,long long int b) 
{
	if(a<b) swap(a,b); // a is bigger than b    
    std:: cerr << a << " " << b << " " << t << " \n";       
    if(false) ;    
    else if (a>2 && b>=0){ t++; opt(a-2,b+1);  }

    return t;
}

int main()
{
  long long int a1,a2;
//  t=1;  
  std :: cin >> a1 >> a2;
  std :: cout << opt(a1,a2) << std :: endl;

}
