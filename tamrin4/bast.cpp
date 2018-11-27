#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,x;
    cin >> x >>n;
    double sum = 0;
 
   for(int i=0;i<=n;i++){
         double temp = 1;         
        for (int j = 1;j<=i;j++)
            temp = temp * x / j;        
        sum += temp ;
    }
    cout << fixed << setprecision(3) << sum  << endl;
}
