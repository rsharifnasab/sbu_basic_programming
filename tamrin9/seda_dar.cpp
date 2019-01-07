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
    string s;
    cin >> s;
    int max = 0;
    int t = 0;
    for(int i=0;i<=s.length();i++)
    {
        if (vowel_check(s[i])) t++;
        else 
        {
            max = (max>t)? max : t;
            t=0;
        }

    }
    cout << max << endl;
}
