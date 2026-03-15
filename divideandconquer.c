#include<stdio.h>
#include<stdlib.h>

int main()
{
    int beg,end,loc,mid,j,item;
    int data[10];
    printf("Enter values in array in sorted order:\n");
    for(j=0; j<10; j++)
    {
      printf("Enter your values in data[%d]",j);
      scanf("%d",&data[j]);
    }
    
    printf("Enter you item value to search:\n");
    scanf("%d",&item);
    beg=0;
    end=9;
    mid=(beg+end)/2;
    while( beg<end && data[mid]!=item )
    {
      if(item==data[mid])
      end=mid-1;
      else 
      beg=mid+1;
      mid=(beg+end)/2;
    }
    if(data[mid]==item)
    {
    loc=mid;
    printf("Your value is found at array %d:",loc);
    }
    else 
    printf("Your value is not present in this array:\n");
    return 0;
}