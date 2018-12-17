#include <iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 
 //int s[n],d[n];
  int s,d;
 cin >> s >> d;
 int today =s;
  cerr << "today:" << today << endl; 
 for(int i=1;i<n;i++) // get number from user
 {
   cin >> s >> d; 
   // s[i] = s; d[i] = d;
    int k =1;
    for(k=0;s+k*d<= today;k++);
        //if(s+k*d>= today) break;
    today = s + k*d ;
    cerr << "today:" << today << endl; 
    
 
 }
 
 
 cout << today << endl ;
        
}