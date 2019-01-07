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
}


// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}



int main()
{

  while (1==1)
  {
    int m1=0;
    std::cin >> m1 ;
    //int arr_size = sizeof(arr)/sizeof(arr[0]);
    int & arr_size = m1;
    if (m1<0) return 0;
    int * a = new int[m1];
    for(int i = 0; i < m1; ++i)
      std::cin >> a[i];
    mergeSort(a, 0, arr_size - 1);
    for(int i = 0; i < m1; ++i)
      std::cout << a[i]<< " ";
    std::cout << "\n";
    delete []a;
  }
  return 0;
}
