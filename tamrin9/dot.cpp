#include <iostream>
#include <iomanip>
#include <math.h>
struct point {
    double x;
    double y;

};

double dist(point a,point b)
{
    return sqrt (( a.x - b.x)*( a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main()
{
    point a,b;
    std::cin >> a.x  >> a.y >> b.x >> b.y ;
    std::cerr << std::fixed << std::setprecision(5) << dist(a,b) << "\n" ; 
    std::cout << std::fixed << std::setprecision(5) << sqrt (( a.x - b.x)*( a.x - b.x) + (a.y - b.y)*(a.y - b.y))<< "\n" ; 

 // std::cout << dist(a,b) << "\n" ; 

}
