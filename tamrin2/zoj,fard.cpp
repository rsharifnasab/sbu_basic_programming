#include <iostream>
using namespace std;


bool zoj(int a)
{
  return a%2 == 0;

}

int main()
{
 int a1,a2,a3,a4,a5;
 cin >> a1 >> a2 >>a3 >> a4 >> a5;
 int tzoj = a1%2 + a2%2 + a3%2 + a4%2+a5%2;
 std::cout <<  5- tzoj << " "<<tzoj << '\n';
}
