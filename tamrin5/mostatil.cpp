#include <iostream>
#include <iomanip>
#include <math.h>
double S_find(int P2)
{
    double ans = pow(P2,2) /16;
    return ans; 
}
int main()
{
    
    int a;   
    std :: cin >> a;
    std :: cout << std :: fixed << std :: setprecision(1) <<S_find(a);
    //std :: cout << std :: endl;
}   