#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

bool vowel_check(char in)
{
    if(in=='a') return true;
    if(in=='e') return true;
    if(in=='i') return true;
    if(in=='o') return true;
    if(in=='u') return true;
    if(in=='A') return true;
    if(in=='E') return true;
    if(in=='I') return true;
    if(in=='O') return true;
    if(in=='U') return true;
    return false;

}

int main()
{
    string main;
     std::getline (std::cin,main);
    string san;
    cin >> san;

    for(int i=0;i<=main.length();i++)
    {
        int ok = 0;
        for(int j=0;j<san.length();j++)
        {
            if (san[j]==main[i+j]) ok++;
        }
        if(ok==san.length())
        {
            for(int k=0;k<san.length();k++)
            {
                main[i+k]='*';
            }
        }
    }
    cout << main << endl;

}
