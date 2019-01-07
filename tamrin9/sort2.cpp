#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

const int maax = 1001;
string db[maax];


void swap(string& xp, string& yp)
{
    string temp = xp;
    xp = yp;
    yp = temp;
}

char low(char in) {
  if(in <= 'Z' && in >= 'A')
    return in - ('Z' - 'z');
  return in;
}

bool bigger(string a , string b) // a is bigger or not
{
    char a0 = low(a[0]); // make it lower
    char a1 = low(a[1]);

    char b0 = low(b[0]);
    char b1 = low(b[1]);

    if(a0>b0) return true;
    if(a0<b0) return false;
    if(a0==b0 && a[0]!= b[0])
    {
         if(a[0]>b[0]) return !false;
         if(a[0]<b[0]) return !true;
    }
    //if (a.size() ==1 && b.size() ==1) return true;
    if (a.size() ==1) return !true;
    if (b.size() ==1) return !false;

    if(a1>b1) return true;
    if(a1<b1) return false;
    if(a1==b1 && a[1]!=b[1])
    {
        if(a[1]>b[1]) return !false;
        if(a[1]<b[1]) return !true;
    }
    return true;
}



void bubbleSort()
{
   int n = maax;
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-1; j++)
           if (bigger(db[j], db[j+1]))
              swap(db[j], db[j+1]);
}


bool add(){
    static int t = 0;
    t++;
    cin >> db[t] ;
    if(db[t]=="0") { db[t] = ""; return false;}
    return true;
}

int print()
{
    for(int i=0;i<maax;i++)
        if(db[i]!="")
        {
          cout << db[i] << " ";
          cerr << db[i].size() << " -";
        }
    cout << endl;
    return 0;
}

int main()
{
  // a aa A AA 0

    string order = "salam";
    for (int i=0; i<maax; i++)
      db[i]= "" ;

    while(add());
    bubbleSort();
    //selectionSort();
    print();
    //print_sorted() ;
}
