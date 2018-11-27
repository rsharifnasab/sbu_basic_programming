#include <iostream>
//#include <cmath>
using namespace std;

int main()
{
   double x1,y1,vx1,vy1;
   cin >> x1 >>y1>>vx1>>vy1;
   double x2,y2,vx2,vy2;
   cin >> x2 >>y2>>vx2>>vy2;
   double x3,y3,vx3,vy3;
   cin >> x3 >>y3>>vx3>>vy3;
   double x4,y4,vx4,vy4;
   cin >> x4 >>y4>>vx4>>vy4;
   double x5,y5,vx5,vy5;
   cin >> x5 >>y5>>vx5>>vy5;

   for(int i=0;i <= 3600;i++) 
   {
    
    if(x1+i*vx1 == x2+i*vx2 && y1+i*vy1 == y2+i*vy2)  {
        cout << 1 << " and "<<2 <<" in "<<i<<"s"<<endl;return 0;}
           
    if(x1+i*vx1 == x3+i*vx3 && y1+i*vy1 == y3+i*vy3)  {
        cout << 1 << " and "<<3 <<" in "<<i<<"s"<<endl;return 0;}
   
    if(x1+i*vx1 == x4+i*vx4 && y1+i*vy1 == y4+i*vy4)  {
        cout << 1 << " and "<<4 <<" in "<<i<<"s"<<endl;return 0;}

    if(x1+i*vx1 == x5+i*vx5 && y1+i*vy1 == y5+i*vy5)  {
        cout << 1 << " and "<<5 <<" in "<<i<<"s"<<endl;return 0;}

           
    if(x2+i*vx2 == x3+i*vx3 && y2+i*vy2 == y3+i*vy3)  {
        cout << 2 << " and "<<3 <<" in "<<i<<"s"<<endl;return 0;}
   
    if(x2+i*vx2 == x4+i*vx4 && y2+i*vy2 == y4+i*vy4)  {
        cout << 2 << " and "<<4 <<" in "<<i<<"s"<<endl;return 0;}

    if(x2+i*vx2 == x5+i*vx5 && y2+i*vy2 == y5+i*vy5)  {
        cout << 2 << " and "<<5 <<" in "<<i<<"s"<<endl;return 0;}

  

    if(x3+i*vx3 == x4+i*vx4 && y3+i*vy3 == y4+i*vy4)  {
        cout << 3 << " and "<<4 <<" in "<<i<<"s"<<endl;return 0;}

    if(x3+i*vx3 == x5+i*vx5 && y3+i*vy3 == y5+i*vy5)  {
        cout << 3 << " and "<<5 <<" in "<<i<<"s"<<endl;return 0;}



    if(x4+i*vx4 == x5+i*vx5 && y4+i*vy4 == y5+i*vy5)  {
        cout << 4 << " and "<<5 <<" in "<<i<<"s"<<endl;return 0;}
    }
    cout << "SAFE" << endl;
}
