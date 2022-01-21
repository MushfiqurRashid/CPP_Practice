#include <stdio.h>


int main()
{
    int i,n,sum=0,ar[1000];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + ar[i];

    }
    printf("%d\n",sum);


    return 0;
}
