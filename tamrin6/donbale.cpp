#include <iostream>

long int a(int n)
{
    if ( n<=1 ) return 1;
    if( n== 2) return 2;
    return 2*a(n-2) - a(n-1); 
}
int main()
{
    int n;
    std::cin>>n;
    std::cout << a(n)<< std::endl;
}
