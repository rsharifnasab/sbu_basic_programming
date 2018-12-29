#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    bool flag = false;
    while(!flag){
        if(a%b==0){
            flag = true;
        }
        else{
            int d = a % b;
            a = b;
            b = d;
        }
    }
     cout<<b;
    return 0;
}