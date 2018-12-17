#include <iostream>
#include <string>

int a[20];

int main()
{
    int n = 20;
   for(int i=0;i<n;i++)
    std:: cin >> a[i];
   double average=0;
   for(int i=0; i<n; i++) 
    	average+=a[i];
    average/=n;
    bool hast = false;
   for(int i=0; i<n; i++) 
    	hast = (a[i]==average)? true: hast;
    std::string s = (hast) ? "true" : "false";

    std::cout << s << "\n";
}
