// this program has been created by Roozbeh Sharifnasab
#include <iostream>
 
double calculator(double r)
{
    return ( r *r * 2 / 3 ) ;
}
int main()
{
    double a;
    std :: cin >> a;
    std :: cout << calculator(a) << std :: endl;
}