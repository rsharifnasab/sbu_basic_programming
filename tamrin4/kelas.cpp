#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double n,sum = 0;
    
  cin >> n;
  for(int i =1; i <= n; i++ )
  {
    int temp = 0;
    cin >> temp;
    sum += temp /( pow(2,i-1)) ;
    //s2 +=    2/( pow(2,i)) ;
  }

  cout << sum/ n  << endl;
}
