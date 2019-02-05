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

void multiply(int **a,int **b,int m1,int n1,int m2,int n2)
{
//r c
//m n
int i, j, k;
  for(i=0; i<m1; ++i)
  {
        for(j=0; j<n2; ++j)
        {
            int temp = 0;
           for(k=0; k<m2; ++k)
           {
              temp+=a[i][k]*b[k][j];
           }
           std::cout << temp << " ";
        }
        std::cout << "\n";
  }
return ;

/*
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            int temp= 0;
            for (k = 0; k < N; k++)
                temp += mat1[i][k] * mat2[k][j];
            std :: cout << temp << " ";
        }
        std :: cout << std::endl;
    }
    */
}


int main() {
  int m1 ,n1;
  std::cin >> m1 >> n1;
  int** a = new int*[m1];
  for(int i = 0; i < m1; ++i)
    a[i] = new int[n1];
  for(int i = 0; i < m1; ++i)
  {
    for (int j = 0; j < n1; j++)
    {
      std::cin >> a[i][j];
    }
  }

  int m2 ,n2;
  std::cin >> m2 >> n2;
  int** b = new int*[m2];
  for(int i = 0; i < m2; ++i)
    b[i] = new int[n2];
  for(int i = 0; i < m2; ++i)
  {
    for (int j = 0; j < n2; j++)
    {
      std::cin >> b[i][j];
    }
  }


  if(n1 != m2 )
  {
    std::cout << "error" << std::endl;
    return -1;
  }

  multiply(a,b,m1,n1,m2,n2);


  return 0;
}
