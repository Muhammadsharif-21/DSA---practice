#include <stdio.h>

  int main()
  { 
     int a[5][5], b[5][5], c[5][5];
     int i,j,k,m,n,p,p1;
     printf("Enter number of Rows in matrix A: ");
     scanf("%d",&m);
     printf("Enter number of columns in matrix A: ");
     scanf("%d",&p);
     printf("Enter number of Rows in matrix B: ");
     scanf("%d",&p1);
     printf("Enter number of columns in matrix B: ");
     scanf("%d",&n);
     
      if(p!=p1)
      printf("Multiplication not possible:\n");
      else
      {
       printf("Enter values for Matrix A: \n");
       for(i=0; i<m; i++)
       {
        for(j=0; j<p; j++)
        { 
        printf("Enter values for Matrix A[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
       }
      
      for(i=0; i<p1; i++)
       {
        for(j=0; j<n; j++)
        { 
        printf("Enter values for Matrix B[%d][%d]",i,j);
        scanf("%d",&b[i][j]);
        }
       }
      
      for(i=0; i<m; i++)
      {
      for(j=0; j<n; j++)
      {
        c[i][j]= 0;
        for(k=0; k<p; k++)
        {
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
      }
      }
      
      printf("After matrix multiplication Matrix c contains:\n");
      for(i=0; i<m; i++)
       {
        for(j=0; j<n; j++)
        { 
        
        printf("Matrix C[%d][%d]", i, j, c[i][j]);
      }
      printf("\n");
      }
 
  }
 
 
  } 
  