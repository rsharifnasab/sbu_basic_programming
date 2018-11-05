#include <iostream>
using namespace std;
int main()
{
  int y1 , y2 , v1 ,v2 ,g;
  cin >> y1 >> y2;
  cin >> v1 >> v2;
  cin >> g;
  float min_dist =  0 ;
//    if (v2 == v1) min_dist = abs(y2-y1);
 // printf("%.2f\n",min_dist);
//  min_dist = (g == 0 ) ? min_dist : 0.00;
  //min_dist = (v2 - v1 == 0) ? abs(y2-y1) :(g == 0 ) ? min_dist : 0.00; 
   min_dist = (g == 0) ? abs(y2-y1) : 0;
   min_dist = ((v2-v1)/(y2-y1) > 0) ? 0 : abs(y2-y1);
    
  printf("%.2f\n",min_dist); 
  return 0;
}
