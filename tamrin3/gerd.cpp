#include <iostream>
#include <math.h>

int main()
{
    float a1,a2;
    std :: cin >> a1 >> a2 ;
    if ( round(a1 * 10000) == round(a2 * 10000) ) 
        std :: cout << "mosavi!"  << std :: endl;
    else  std :: cout <<  "namosavi!"  << std :: endl;
    
    
}
