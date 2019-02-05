#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

const int maax = 1009;
string a[maax];

  
void swap(string *xp, string *yp) 
{ 
    string temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

bool bigger(string a , string b)
{
    int a0 = (a[0]<='Z' && a[0] >= 'A') ? a[0] - 'A' + 'a': a[0];
    int a1 = (a[1]<='Z' && a[1] >= 'A') ? a[1] - 'A' + 'a': a[1];

    int b0 = (b[0]<='Z' && b[0] >= 'A') ? b[0] - 'A' + 'a': b[0];
    int b1 = (b[1]<='Z' && b[1] >= 'A') ? b[1] - 'A' + 'a': b[1]; 

    if(a0>b0) return true;
    if(a0<b0) return false;
    if(a0==b0 && a[0]!=b[0]) 
    {
         if(a[0]>b[0]) return true;
         if(a[0]<b[0]) return false;
    }

    if(a1>b1) return true;
    if(a1<b1) return false;
    if(a1==b1 && a[1]!=b[1])
    { 
        if(a[1]>b[1]) return true;
        if(a[1]<b[1]) return false;
    }    
    return true;
}

void bubbleSort() 
{
   int n = maax; 
   int i, j; 
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++)  
           if (bigger(a[j], a[j+1])) 
              swap(&a[j], &a[j+1]); 
} 

  
bool add(){
    static int t = 0;
    t++;
    cin >> a[t] ;
    if(a[t]=="0") { a[t] = "" ;return false;}
    return true;
}

int print()
{
    for(int i=0;i<maax;i++)
        if(a[i]!="") cout << a[i] << " ";
    cout << endl;
    return 0;
}

int main()
{
    string order = "salam";
    for (int i=0; i<maax; i++) 
      a[i]= "" ;       

    while(add());
    bubbleSort();
    print();
    //print_sorted() ;
}











void print_sorted() 
{
    int n = maax-1; 
    int index[n]; 
    string arr[maax];
    int i, j, min; 
    for (i=0; i<n; i++) 
    {
       arr[i][0] = a[i][0];       
       arr[i][1] = a[i][1];   
   //   cout << (arr[i][2] = a[i][2]);    
    }
   for (i=0; i<n; i++) 
        index[i] = i; 
    for (i=0; i<n-1; i++)     
    { 
        min = i; 
        for (j=i+1; j<n; j++) 
           if (bigger(arr[index[min]],arr[index[j]])) 
                min = j; 
        if (min != i) 
        { 
            int temp = index[min]; 
            index[min] = index[i]; 
            index[i] = temp; 
        } 
    }  
    for (i=0; i<n; i++) 
        if(a[index[i]] != "")
            cout << a[index[i]] << endl;  
} 

