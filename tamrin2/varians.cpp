#include <iostream>
#include <cmath>
using namespace std;

double calcvar(float a,float b,float c,float d)
{
    double av = (a +b +c +d)/4;
    //cerr << a << " "<<b<<" "<<c<<" "<<d<<" and av is :"<<av << endl;

    return ((a - av)*(a - av) +(b - av)*(b - av)+ (c - av)*(c - av)+(d - av)*(d - av) ) /4;
}

double fake_calc(float a,float b,float c,float d)
{
  ave = int[4];
  ave[0] = a;
  float v=0;
  int n = 4
  for (i=0;i<n;++i)
  {
    v= pow(ave[i]-m,2) + v;
  }
v=v/n;


}
int main()
{
  double a ,b,c,d;
  cin >> a >> b >> c >> d ;
  double ans = calcvar(a,b,c,d);
  ans =  round (100*ans) /100;
  //ans = sqrt(ans);
  //cerr << ans << endl;
//  double sad_ans = 100 * ans;
//  sad_ans  =  round(sad_ans);
//  ans = sad_ans /100;
  cout << ans << endl;

}
