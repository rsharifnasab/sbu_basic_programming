#include <iostream>
#include <stdio.h>

in
int part1()
{
  int count = 24, *temp , sum = 33;
  temp = &count;
  *temp = 8; // count = 8
  temp = &sum;
  printf("count = %d, *temp = %d , sum = %d\n", count , *temp , sum );

//    std::cout << z << std::endl;


}
int main()
{
  part1();
  return 0;
}
