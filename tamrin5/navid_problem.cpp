#include <iostream>
#include <iomanip>
int tedad_halat=0;

int rest(int tedad_rooz);
int math(int tedad_rooz);
int prog(int tedad_rooz);



int math(int tedad_rooz)
{
    if(tedad_rooz == 1) return 1;
    return math(tedad_rooz-1) + rest(tedad_rooz-1) ;
}

int prog(int tedad_rooz)
{
    if(tedad_rooz == 1) return 1;
    return rest(tedad_rooz-1) +  prog(tedad_rooz-1);
}

int rest(int tedad_rooz)
{
    if(tedad_rooz == 1) return 1;

    return math(tedad_rooz-1) + rest(tedad_rooz-1) +  prog(tedad_rooz-1);
}

int main()
{
    std :: cout << rest(8) << std :: endl;
    
}   