
#include <iostream>

/*

long long int old_fact(long long int n)
{
    if(n <= 1)
        return 1;
    return n * old_fact(n - 1);
}

long long int r_fact(long long int n,long long int m=1)
{
    if(n <= m)
        return 1;
    return n * r_fact(n - 1);
}

*/

int test(int n){
    long long k,i,x;
//std::cin >> n; //the number of raws
for(i=0;i<=n;i++);
for(i=n;i<=n;i++)
{
    x=1;
    for(k=0;k<=i;k++)
    {
        std::cerr << x << " ";
        x = x * (i - k) / (k + 1);
    }
    std::cerr << std::endl;
}
return 0;
}




int final_pas(int n,int k=0,long long int x =1)
{
//    long long x=1;
        std::cout << x << " ";
        x = x * (n - k) / (k + 1);
        if(k<n) final_pas(n,k+1,x)    ;
//std::cout << std::endl;
    return 0;
}



long long int fact(long long int n,long long int m=1)
{
    if(n <= m)
        return 1;
    long long int ans =1 ;
    for(int i=m;i<=n;i++)
    {
        ans *= i;
    }
    return ans;
}


long long int pas(long long int a,long long int b,long long int last) // satr , sotun
{
    
	if(b==1 || b==a) return 1;
    if(b==2) return (a-1);
   // int z1=b-1;
    int t1=a-1,z1=b-1;
//    return fact(t1) / (fact(t1-z1) * fact(z1));
    return fact(t1,z1)/fact(t1-z1);

//	return pas(a-1,b-1) +pas(a-1,b) ;
}





void satr_pas(unsigned long long int a)
{
    long long int last = 1;
    long long int pre_last = 0;
    a =0;
    for(unsigned long int i=1;i<=(a/2);i++)
    {
        pre_last=last;
        last =  pas(a,i,last);
       std:: cout << last <<" "; //satr , sotun
    }
   if (a%2 == 1) std:: cout << pas(a,a/2 +1,last)<<" "; 
   if(a>=2) std::cout << last << " ";    
if(a>3) std::cout << pre_last << " ";

    for(long int i=(a/2)-2;i>=1;i--)
    {
       std:: cout << pas(a,i,last)<<" "; //satr , sotun
    }

    std :: cout << "\n";
}




int main()
{
    
 //   int zero = 0;
 //std::cout << fact(5) << "\n";
  unsigned int a;
  std :: cin >> a ;
 // test(a-1);
 //satr_pas(a);
    final_pas(a-1);
std::cout << "\n";
}
