#include <iostream>
#include <math.h>
int ans=0;
int s = 0;
int big;
 short int r;

long int barax(int a,int b=0)
{
    b= (b*10) + a %10;
    a/=10;
    if (a!=0) return barax(a,b);
    return b;
}


int zarb(int big,const int r,unsigned int baghi=0)
{
    s++;
    if (s >12) 
        return 0;
//    int temp = (r * (big%10) ) + baghi;
    int temp = (r * (big%10) ) ;
    temp += baghi;
    std :: cerr << " big= " << big << " r=" << r << " baghi= " << baghi << " temp=" << temp << " ans is="<< ans << std :: endl;
   
    ans = (ans * 10) + (temp%10);
    baghi =  (temp/10);
    big/=10;
    if  (big!= 0 || baghi!=0 ) zarb(big,r,baghi);
    else 
    {
     ans =  barax(ans);
   // if(big%10 == 0) ans*=10;
    if(::big%10 == 5 && r==2) ans*=10;
    if(::big%10 == 5 && r==4) ans*=10;
    if(::big%10 == 5 && r==8) ans*=10;
    if(::big%10 == 2 && r==5) ans*=10;
    if(::big%10 == 4 && r==5) ans*=10;
    if(::big%10 == 8 && r==5) ans*=10;
    return ans;

    }
}

int main()
{
 
  std :: cin >> big >> r;
 long int ans =  zarb(big,r);
  std :: cout << ans << std :: endl;

}
