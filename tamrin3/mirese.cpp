#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

void print( float num1)
{
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout << num1 << std::endl;

}
bool swap(int& a,int& b){
    int t = a;
    a = b;
    b = t;
    return true;
}

int min (int a , int b)
{
    if (a < b) return a;
    return b;  
}

int main()
{
    
    float  t, a ,v ;
    std :: cin >> t>> a >> v ;
    if(v <= 20 ) 
    {
        cout <<  "Can't Make It!" << endl;
        return 0; 
    }
    float dx = (200 / a) + (t - (20/a))*20 ;
    float ft = dx / (v-20);
    print(ft);
}
