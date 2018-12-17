#include <iostream>
#include <math.h>



int t_mabna(long int a , unsigned  short int b, bool first)
{
    if(a<0)
    {
        std::cout<<'-';
       t_mabna(-a,b,true);

    }   
    if (first&&a==0)
    {
        std :: cout << 0;
        return 0;
    }
    
    if (a <=0 ) 
        return 0;

  long int t = a/b;
  t_mabna(t,b,false);
  std :: cout << a%b;
}

int main()
{
    int zero = 0;
  long int a ;
  unsigned short int b;
  std :: cin >> a >> b;
//  if(b==3) return b/zero;
 // if(b==3)
  //  {
  //      if(a<0) return b/zero;   

   // } 
  t_mabna(a,b,true);
  std :: cout << std :: endl;

}
