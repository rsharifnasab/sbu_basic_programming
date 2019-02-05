#include <stdio.h>
#include <math.h>
void print_avg(double mul , int n);

int main(){
    double d , mul;
    for (i = 1 ; d>=0 ; ++i){
        scanf("%lf", &d);
        if(d>=0){
            mul*=d;
        }
    }
    print_avg(mul,i);
    return 0;
}
void print_avg(double mul , int n){
    if (n > 0){
        double avg = pow(mul,1/n);
        printf("Trig. mean: %.2lf\n" , avg)
    }
    else
        printf ("No number entered!");
}