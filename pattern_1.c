#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("* ");
        }
        printf("\n");
        k++;
    }
    return 0;
}