#include <iostream>
#include <math.h>
#include <iomanip>

int min (int a , int b)
{
    if (a < b) return a;
    return b;  
}


void print( float num1)
{
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout << num1 << std::endl;

}

int main()
{
    int tool_zel,h_ostovane , r_ostovane ;
    std :: cin >> tool_zel >> h_ostovane >> r_ostovane ;
    int ertefa = min (tool_zel , h_ostovane);
    float javab = 0;
    
    if (r_ostovane *2 <= tool_zel ) 
         javab = ertefa  * M_PI * r_ostovane * r_ostovane;  
    //if (r_ostovane *2 >= tool_zel * sqrt(2)) 
    else    javab = ertefa * tool_zel * tool_zel;
    print(javab);
}
