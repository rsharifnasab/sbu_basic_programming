#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n = 20;
    cin >> n;
    int a[n];
    int zero = 0;
    int money = 0;
    int max_money=0;
   for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        if (money+temp >=0 ) money+=temp;
        else money = 0;
        max_money = (max_money>money)?max_money : money ;
    }   
    std:: cerr << "\n the ans is : ";
    std:: cout << max_money << endl; 
}
