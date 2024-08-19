
#include <stdio.h>
int main() 
{
    int arr[]={7,3,5,9,1,0,2,4};
    int i,j,n=8,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
}
    return 0;
}