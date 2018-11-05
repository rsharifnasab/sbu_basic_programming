#include <stdio.h>
#include <math.h>
int main()
{
  float x[4];
  float sum=0 , ave;

  scanf("%f",&x[1]);
  scanf("%f",&x[2]);
  scanf("%f",&x[3]);
  scanf("%f",&x[4]);
  sum=x[1] + x[2] + x[3] + x[4];
  ave = sum /4;
  float var=0;
  var=pow(x[1]-ave,2) /4 + pow(x[2]-ave,2) /4 + pow(x[3]-ave,2) /4 + pow(x[4]-ave,2) /4;
  //printf("The average= %.2f ",ave);
  printf("%.2f",var);
}
