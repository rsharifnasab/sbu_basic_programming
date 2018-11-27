#include <iostream>
#include <iomanip>
#include <cstdlib>



int calc(long long int a)
{
 //   std :: cerr << "calc runned!" << std :: endl;
    int t0 = 0,t1= 0,t2= 0,t3= 0,t4= 0,t5= 0,t6= 0,t7=0 ,t8=0 ,t9=0 ;
    if(a==0)
    {
      std :: cout <<  0  ;   
        return 0;
    }    
//    a =abs(a);
    for(int i=0;a>0;i++)
    {
        short int r = a%10;
        a/=10;
        if(r== 1 ) t1++;
        if(r== 2 ) t2++;
        if(r== 3 ) t3++;
        if(r== 4 ) t4++;
        if(r== 5 ) t5++;
        if(r== 6 ) t6++;
        if(r== 7 ) t7++;
        if(r== 8 ) t8++;
        if(r== 9 ) t9++;
        if(r== 0 ) t0++;
    }


 for(int j=0;j < t9 ;j++)
        std :: cout << 9;


    for(int j=0;j < t8 ;j++)
        std :: cout << 8;

 
    for(int j=0;j < t7 ;j++)
        std :: cout << 7;

    for(int j=0;j < t6 ;j++)
        std :: cout << 6;


    for(int j=0;j < t5 ;j++)
        std :: cout << 5;

    for(int j=0;j < t4 ;j++)
        std :: cout << 4;


    for(int j=0;j < t3 ;j++)
        std :: cout << 3;

    for(int j=0;j < t2 ;j++)
        std :: cout << 2;


    for(int j=0;j < t1 ;j++)
        std :: cout << 1;

    for(int j=0;j < t0 ;j++)
        std :: cout << 0;

}

int main()
{
    long long int a;
    std :: cin >> a;
    calc(a);
    std :: cout << std :: endl;
//    std :: cout << calc(a)<< std :: endl;
}   