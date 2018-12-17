#include <iostream>



long long int fact(long long int n)
{
    if(n <= 1)
        return 1;
        return n * fact(n - 1);
}


long long int entekhab(long int n,long int k)
{
    return fact(n)/(fact(k)*fact(n-k));
}


long katalanR( int k )
{

    if( k == 0 )
        return 1;

    long i, sum = 0;

    for( i = 0 ; i < k ; i++ )
    {
//        int t = i-1;
        sum += ( katalanR( i ) * katalanR( k - i - 1 ) );
    }
 return sum;

}


long int katalanE(int n)
{
 	  long c = entekhab(n + n, n);
 	  return (c / n + 1);
}



int main()
{
    int zero = 0;
  unsigned int a;
  std :: cin >> a ;
  if(katalanE(a)==katalanR(a)) std::cout << katalanE(a) << "\n";
  else std::cout << katalanR(a) << "\n";
//std::cout << katalanE(a) << "\n";
 //else std::cout << a/zero << "\n";
}
