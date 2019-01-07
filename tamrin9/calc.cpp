#include <iostream>
#include <string>
int main()
{
    std::string main;
    std::cin >> main;
    int len = main.length();
    long long thiis = 0;
    long long total = 0;
    bool oper = 1;
    for(long long  i =0;i<len;i++)
    {
        if(main[i]=='+')
        {
            if(oper) total+=thiis; 
            else total-=thiis; 
            oper = 1;
            thiis = 0;
       } 
       else if(main[i]=='-')
        {
            if(oper) total+=thiis; 
            else total-=thiis;
            oper = 0;
            thiis = 0;
       } 
        else
        {
            int t = main[i]-'0';
            thiis = thiis *10 + t;
        }
    }
    if(oper) total+=thiis; 
            else total-=thiis;
    std::cout << total << "\n";
}
