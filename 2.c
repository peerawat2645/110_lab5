#include <stdio.h>
int main()
{
    int n,i,j,k=0,a,b;
    scanf("%d",&n);
    a=n/2;
    if(n%2==0)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<n; j++)
            {
                if(j==(a+k)||j==(a-k))
                {
                    printf("*");
                }
                else
                    printf("_");
            }
            printf("\n");
            if(i==a) continue;
            else if(i>a) k--;
            else k++;
        }
    }
    else
    {
        a++;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(j==(a+k)||j==(a-k))
                {
                    printf("*");
                }
                else
                    printf("_");
            }
            printf("\n");
            if(i>=a) k--;
            else k++;
        }
    }
    return 0;
}
