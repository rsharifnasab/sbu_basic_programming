#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n = 20;
    cin >> n;
    int db[n];
    int zero = 0;
   for(int i=0;i<n;i++)
    {
        std:: cin >> db[i];
        if(db[i]<0) cout << db[i]/0;
    }
    int count0 = 0;
   for(int i=0; i<n; i++) 
    {
         if(db[i]==0)
        {
            count0++;
        }
    }   
    if (count0!=0)   std::cout << "0: "<< count0 << std::endl;
    
    int max = 0;
    for(int i=0; i<n; i++) 
    	   max = (db[i]>max) ?  db[i] : max;
    for(int j=1;j<=max;j++)
    {
        int count = 0;
        for(int i=0; i<n; i++) 
            if(db[i]==j) count++;
         if (count!=0)   std::cout << j<<": "<< count << std::endl;
           
    } 

    
}
