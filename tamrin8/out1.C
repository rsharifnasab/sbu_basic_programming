#include <iostream>
using namespace std;
int part2()
{
  int *p;
  int i;
  int k;
  i = 42;
  k = i;
  p = &i;

  //k = 75; notthin
  // *k = 75; error
  //p = 75; error
  *p = 75;
  std::cout << i << std::endl;
  return 0;
}
int part1()
{
//  int z1,z2,z3;
//  int *c = &z1;
//  int *d = &z2;
//  int *e = &z3;
  int* p1;

  int* p2;

  int* p3;

  int d = 100;

  p3 = &d;

  cout << "*p3 = " << *p3 << endl;

  p3 = p1;

  cout << "*p3 = " << p3

       << ", p3 = " << p3 << endl;

  *p1 = *p2;

  cout << "*p1 = " << *p1

       << ", p1 = " << p1 << endl;

}
int main()
{
  part1();
  return 0;
}
