#include <iostream>

using namespace std;

int main()
{
    long long my_num;
    cin >> my_num;
    int min=my_num%10 ;
    int max=my_num%10 ;
    int j_min=1; 
    int j_max=1;
    int i=1;
   for(;my_num > 0;i++)
    {
        short int this_num = my_num % 10;
        my_num/=10;
        if(this_num <= min) { min = this_num; j_min = i;}
        if(this_num >= max) { max = this_num; j_max = i;}
    }
    cout << i-j_max<< " "<< i-j_min   << endl;
}
