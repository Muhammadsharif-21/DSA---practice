#include <stdio.h>

    int main()
    { 
       int k=0, loc=-1, item;
       int  DATA[]={10,25,100,500};
       int n=4;
       
       
       printf("Enter the item you want to find:");
       scanf("%d",&item);
       while(loc==-1&&k<n)
       {
       if(item==DATA[k])
       {
       loc=k;
       }
       k=k+1;
       }
       
       if(loc==-1)
       printf("item is not in the array");
       else
          printf("%d is the location of the item: ",loc);
    }