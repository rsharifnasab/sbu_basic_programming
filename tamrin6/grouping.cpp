#include <iostream>
#include <math.h>

long long int fact(long long int n)
{
    if(n <= 1)
        return 1;
        return n * fact(n - 1);
}


long long int entekhab(long int n,long int k)
{
    return fact(n)/(fact(k)*fact(n-k));
}

long long int ans(int kol,int p,int q)
{
    return entekhab(kol,p) * entekhab(kol-p,q);
}

int main()
{
    std::cerr << entekhab(8,2) * entekhab(6,2) << "\n";
 std::cerr << ans(8,2,2) << "\n";
    int kol;
    std::cin >> kol;
    int p,q;
    std::cin >> p >> q;
     std :: cout << ans(kol,p,q) << std :: endl;

}
