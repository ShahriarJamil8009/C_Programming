#include<stdio.h>
int main()
{
    int arr[5];
    int i,count=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
            if(arr[i]%2==0)
            {
                count++;
            }
        }
    printf("%d valores pares\n",count);
    return 0;
}
