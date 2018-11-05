#include <iostream>
#include <math.h>
#include <cmath>


int main()
{
    float d1,d2,d3,r;
    //std :: cout << M_PI << std :: endl;
    std :: cin >> d1 >> d2 >> d3 ;
    std :: cin >> r ;
    float v_porteghal = M_PI * r * r * r * 4 / 3;
    float v_jabe = d1 * d2 * d3;
    int count_porteghal = (v_jabe / v_porteghal) * (M_PI / (3 * sqrt(2)));
    std :: cout << count_porteghal << std :: endl;  
}
