#include <iostream>
#include <string>
using namespace std;

const int t_num = 10;
short int a[t_num];

bool num_check(long long int num=-1)
{
  
    if(num==-1) //convert array to int
    {
        num=0;
        for(int i=0;i<t_num;i++)
           num = num*10 + a[i];
     }
  //  cerr << " num is : " << num << endl;

    int c = num%10;
    num/=10;
    int sum = 0;
    for(int i=1;i<t_num;i++)
    {
          int s = 0;
           if(i%2 == 0) s=(i+1)*(num%10);
           else s=  2*(num%10);
            sum +=s;
           num/=10;
    }
    return (sum%10 == c);
}


void print(string s=" result ")
{
    cerr << s;
  for(int i=0;i<t_num;i++)
      { cout <<  a[i] ;}
    cout << endl;
}

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
int main()
{
 // cerr << num_check(2583681244) << endl;   
    for(int i=1;i<t_num;i++)
    {   cin >>  a[i]; }
  //  print("first test :" );
   


       for(int i=0;i<t_num;i++)
        {
            a[0]=i;
            if(num_check())  print();
        }
    swap(a[0],a[1]);


     for(int i=0;i<t_num;i++)
        {
            a[1]=i;
            if(num_check())  print();
        }
    swap(a[1],a[2]);


 for(int i=0;i<t_num;i++)
        {
            a[2]=i;
            if(num_check())  print();
        }
    swap(a[2],a[3]);



 for(int i=0;i<t_num;i++)
        {
            a[3]=i;
            if(num_check())  print();
        }
    swap(a[3],a[4]);



 for(int i=0;i<t_num;i++)
        {
            a[4]=i;
            if(num_check())  print();
        }
    swap(a[4],a[5]);




 for(int i=0;i<t_num;i++)
        {
            a[5]=i;
            if(num_check())  print();
        }
    swap(a[5],a[6]);



 for(int i=0;i<t_num;i++)
        {
            a[6]=i;
            if(num_check())  print();
        }
    swap(a[6],a[7]);


 for(int i=0;i<t_num;i++)
        {
            a[7]=i;
            if(num_check())  print();
        }
    swap(a[7],a[8]);



 for(int i=0;i<t_num;i++)
        {
            a[8]=i;
            if(num_check())  print();
        }
    swap(a[8],a[9]);

 for(int i=0;i<t_num;i++)
        {
            a[9]=i;
            if(num_check())  print();
        }
//    swap(a[2],a[3]);

















 
}