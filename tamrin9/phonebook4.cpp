#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

struct db {
    string f_name;
    string l_name;
    string num;
    bool free;
};


const int maax = 1000;
db a[maax];



bool compare(db a,db b)
{
  return a.l_name < b.l_name;
}

void print_sorted()
{

    sort (a,a+maax,compare);
    for(int i=1;i< maax;i++)
      if(!a[i].free)
            cout << a[i].f_name << " "<< a[i].l_name << " "<< a[i].num<< endl;
}

void add(){
    static int t = 1;
    cin >> a[t].f_name >> a[t].l_name >> a[t].num ;
    a[t].free = false;
    t++;
}


void edit(){
    string f, l,n;
    cin >> f >> l >> n;
    for(int i=0;i< maax;i++)
        if(a[i].f_name==f && a[i].l_name==l && !a[i].free ) { a[i].num = n; return; }
}


void clear(){
    for(int i=0;i< maax;i++){
        a[i].f_name = "";
        a[i].l_name= "";
        a[i].num = "";
        a[i].free = true;
    }
}

void showNum(){
   string f, l;
   cin >> f;
   cin >> l;
   for(int i=1;i< maax;i++)
     if(a[i].f_name==f && a[i].l_name==l &&  a[i].free == false) { cout << a[i].num << endl; return;}
   cout << "this person does not exist" << endl;
}

void del(){
    string f, l;
    cin >> f >> l;;
    for(int i=1;i< maax;i++)
      if(a[i].f_name==f && a[i].l_name==l)
      {
            a[i].num = "";
            a[i].f_name = "";
            a[i].l_name = "";
            a[i].free = true;
            return;
     }
   cout << "this person does not exist" << endl;
}

int main()
{
    clear();
    while(true)
    {
        string order;
        cin >> order;
        if(order=="add")
            add();
        else if(order=="edit")
             edit();
        else if(order=="showNum")
            showNum();
        else if(order=="delete")
            del();
       else if(order=="show")
           print_sorted();
        else if(order=="exit")
            return 0;
    }
}
