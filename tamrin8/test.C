#include <iostream>
int * global;
int * f()
{
  int x = 7;
  return &x;
}
void g() {static int t[] = {1,2,3,4,5};}
int main() {
  int *ptr = f();
  g();
  std::cout << *ptr <<std::endl;
  int* p2;
  //std::cout << p2 << std::endl;
  int*np =NULL;
  std::cout << global << std::endl;
  std::cout << np << std::endl;

  return 0;
}
