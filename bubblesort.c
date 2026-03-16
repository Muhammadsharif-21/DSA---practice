#include <stdio.h>
    
      int main()
        {
        
         int a[20];
         int k, temp, n, ptr;
         printf("Enter number of elements : ");
         scanf("%d",&n);
         printf("Create array with %d values: \n",n);
         
         for(k=0; k<n; k++)
        { 
         printf("Enter array values for index a[%d]:", k);
         scanf("%d",&a[k]);
        }
        
        for(k=0; k<n-1; k++)
        {
           ptr = 0;
            while(ptr<n-k-1)
            {
            if(a[ptr]>a[ptr+1])
            {
            temp = a[ptr];
            a[ptr] = a[ptr+1];
            a[ptr+1] = temp;
            }
            ptr=ptr+1;
            }
        
        }
          
          printf("Array values after sorting : \n");
          for (k=0; k<n; k++)
          {
           printf("a[%d] = %d \n", k, a[k]);
          
          }
          
          }