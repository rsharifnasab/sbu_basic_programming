#include <iostream>
#include <iomanip>

bool is_prime(int x){
  if(x==1) return false;
  for(int i = 2;i<x-1;i++)
     if(x%i == 0)  return false;
  return true;
}

int pow(int a,unsigned int b)
{
    if(b<=0) return 1;
    return a*pow(a,b-1);
}

void S_find(unsigned short int t_r,int this_n,int miin){
    if (t_r<=0) {
        if(this_n < miin) return ;
        std :: cout << this_n << std :: endl;
        return;
    }
    for(int i =0;i<=9;i++)
       if(is_prime(this_n*10+i)) S_find(t_r-1,this_n*10+i,miin);
}

int main(){
    int a;   
    std :: cin >> a;
    S_find(a,0,pow(10,a-1));
}   
