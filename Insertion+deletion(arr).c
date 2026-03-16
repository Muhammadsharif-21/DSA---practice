#include <stdio.h>
#define ArraySize 20

int main()
 {
  int la[ArraySize];
  int item,t,j,k,n;
  
      printf("Enter N:\n");
      scanf("%d",&n);
      
      printf("Enter array values:\n");
      for(t=0; t<n; t++)
      {
       printf("Enter value for Intex la[%d]",t);
       scanf("%d",&la[t]);
      }
 
     
          printf("Enter the index number where you want to put value:\n");
          scanf("%d",&k);
          printf("Enter the value you want to insert");
          scanf("%d",&item);
          
          
      j=n-1;
      
        if(j==ArraySize-1)
        printf("Overflow:\n");
        
          else
          { 
          while(j>=k)
          {
           la[j+1] = la[j];
           j=j-1;
          }
          la[k]=item;
          n=n+1;
          
          printf("After adding new item in the index:\n");
          for(t=0; t<n; t++)
          {
          printf("la[%d] = %d:\n",t, la[t]);
          }
            }
            
            
            
            
          printf("Enter the array index from where you want to delete/override the value: \n");    
          scanf("%d",&k);
          if(j==0)
          printf("Under Flow\n");
          else
           {
             item=la[k];
             for(j=k; j<=n-2; j++)
             { 
             la[j]=la[j+1];
             }
             n=n-1;
           printf("Values after deletion:\n");
           for(t=0; t<n; t++)
           {
             printf("la[%d] %d\n", t, la[t]);
           }
          }
          }