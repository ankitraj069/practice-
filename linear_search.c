#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 20

int main()
{
    int arr[size],n,num,found=0,i,pos;
printf(" \n enter the no of elements");
scanf("%d",&n);
printf(" \n enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
printf("\n enter the elements to be searched ");
scanf("%d",&num);
for(i=0;i<n;i++)
{
    if (arr[i]==num)
    {
        found = 1;
        pos=i;
        printf("\n %d is found at %d position",num,i+1);
        break;

    }
}
if (found == 0)
printf("\n %d does not exist in the array",num);
return 0;

}
