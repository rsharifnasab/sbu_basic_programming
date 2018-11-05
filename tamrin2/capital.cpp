#include <iostream>
using namespace std;
int main()
{
 char TOSMALL,tobig;
 cin >> tobig >> TOSMALL;
 tobig = char( int(tobig) -32);
 TOSMALL = char( int(TOSMALL) +32 );
 //cout << int('A')-int('a') << '\n';
 cout << tobig << " "<< TOSMALL << endl ;
}
