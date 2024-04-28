#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    // print 1 to n number
    // k=1;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=k;j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     k++;
    //     printf("\n");
    // }
    

    // print n to 1 number
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}