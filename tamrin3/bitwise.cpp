//""" this program has been created by Roozbeh Sharifnasab"""
#include <iostream>

int main()
{
    int z1,z2,z3;
  
    std :: cin >> z1 >> z2 >> z3 ;
    int t= z1|0;
    z1 = z3|0;
    z3 = z2|0;    
    z2 = t|0;
    std :: cout << z1 <<" "<<z2<<" "<<z3<<std :: endl;    

}
