#include <iostream>


bool is_kamel(int x)
{
    if(x==6) return true;
    if(x==28) return true;
    if(x==496) return true;
    if(x==8128) return true;
    //if(x== 33550336) return true;
  //  if(x== 8589869056) return true;
    return false;
}

bool IS_kamel(int x)
{
    int sum = 0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0) sum+=i;

    }
    return (sum==x);

}

void kamel_find(int maax)
{
    int sum = 0;
    for(int i =5;i<=maax;i++)
    {
       sum+= (i*IS_kamel(i)); 
    }
    std :: cout << sum << std :: endl;
}

int main()
{
    
    int a;   
    std :: cin >> a;
    kamel_find(a);
    //std :: cout << std :: endl;
}   