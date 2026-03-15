#include <stdio.h>

int main()
{
int data[] = {10, 25, 5, 40, 15};
int n = 5;

int k = 0;
int loc = 0;
int max = data[0];

while(k < n)
{
    if(max < data[k])
    {
        loc = k;
        max = data[k];
    }

    k = k + 1;
}

printf("Largest element is %d at location %d", max, loc);

return 0;
}