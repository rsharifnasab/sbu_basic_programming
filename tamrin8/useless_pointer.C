#include <iostream>

int search(int **a,int i,int j,int m,int n)
{
  int sum = (a[i][j]);
  sum =  sum* (-1);
  for(int z1 = 0; z1 < m; ++z1)
    sum+=a[z1][j];
  for(int z2 = 0; z2 < n; ++z2)
      sum+=a[i][z2];
  return sum;
}


int main() {
  int m ,n;
  std::cin >> m >> n;
  int** a = new int*[m];
for(int i = 0; i < m; ++i)
    a[i] = new int[n];
for(int i = 0; i < m; ++i)
{
  for (int j = 0; j < n; j++)
  {
    std::cin >> a[i][j];
  }
}
for(int i = 0; i < m; i++)
{
  for (int j = 0; j < n; j++)
  {
    //  std::cerr << a[i][j] << " ";
    std::cout << search(a,i,j,m,n) << " ";
  }
  std::cout << std::endl;
}



  return 0;
}
