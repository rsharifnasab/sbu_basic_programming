#include <iostream>
using namespace std;

int main()
{
    char a,b;
    cin >> a >> b ;
    if(a >b){char c = a; a = b;  b = c;}
//    cout << a << b << endl;
    unsigned short int dist = b-a;
  //  cerr << dist << endl;    
    for(int i=1;i <= dist;i++)
    {
        for(int t=dist+1-i;t>0;t--) cout << ' ';
        for(char j=0; j< i;j++)  cout << char(a+j)<< " " ;
        cout << endl;        
    }

    for(char i=0; i<= dist;i++)  cout << char(a+i)<< " " ;
    cout << endl;

    for(int i=dist;i >=1;i--)
    {
        for(int t=dist+1-i;t>0;t--) cout << ' ';
        for(char j=0; j< i;j++)  cout << char(a+j)<< " " ;
        cout << endl;            
    }
}
