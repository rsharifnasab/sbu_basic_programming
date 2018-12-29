#include <stdio.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
void print_avg(double mul , int n);

int main(){
    double d , mul=1;
    int i;
    for (i = -1 ; d>=0 ; ++i){
        scanf("%lf", &d);
        if(d>0){
            mul*=d;
        }
    }
    print_avg(mul,i);
    return 0;
}
void print_avg(double mul , int n){
    cout << " n is : " << n << endl; 
   if (n > 0){
        double avg = pow(mul,1.0/n);
        printf("Trig. mean: %.2lf\n" , avg);
    }
    else
        printf ("No number entered!");
}