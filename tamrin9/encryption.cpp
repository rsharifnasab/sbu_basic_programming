#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;


char enc(char in) {
  return (in + in + 7)%256 ;
}


string encrypt(string& str)
{
  string ans;
  ans.resize(str.length());
  for(int i = 0; i <str.length(); ++i)
  {
        ans[i] = ( str[i] * 2 + 7 );
  }
  return ans;
}

struct user {
    string email;
    string pass;
    int age;
};

int main()
{
    char c;
    std::cerr<< sizeof(c);
    user my;
    cin >> my.email >> my.pass >> my.age;
    my.pass = encrypt(my.pass);
    //encrypt(my.pass);
    cout << my.pass << endl;

    user guest;
    cin >> guest.email;
    cin >> guest.pass;
    guest.pass = encrypt(guest.pass);
    if(guest.email== my.email && guest.pass == my.pass)
      cout << my.age ;
    else cout<< "ERROR";


}
