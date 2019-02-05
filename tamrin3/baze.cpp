#include <iostream>

bool swap(int& a,int& b){
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a1,a2,a3;
    int _2ch;    
    std :: cin >> a1 >> a2 >> a3 ;
    if (a1 > a2) swap(a1,a2);
    if (a2 > a3) swap(a2 ,a3);
    if (a1 > a2) swap(a1,a2);

    std :: cin >> _2ch ;
    if (_2ch > a3) std :: cout << "MORE" << std :: endl; 
    else if (_2ch < a1) std :: cout << "LESS" << std :: endl; 
    else if (_2ch > a1  && _2ch < a2 ) std :: cout << "MID1" << std :: endl; 
    else if (_2ch > a2  && _2ch < a3 ) std :: cout << "MID2" << std :: endl; 
    else std :: cout << "EQUAL" << std :: endl; 

    
  //  std :: cout << count_porteghal << std :: endl;  
}
