#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double r,R,n_h;
    cin >> r >> R >> n_h;
    double h = (R *n_h) / (R-r);
    double big_r = ( ( h * R ) / sqrt(R*R + h*h) )  / (1 + (R/ sqrt(R*R + h*h) ) );
   big_r = (big_r > n_h/2) ? n_h/2 : big_r;
    cout << fixed << setprecision(4) << big_r << endl;
}