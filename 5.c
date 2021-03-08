#include <stdio.h>
int main()
{
    int n,m,t,i,j,k,l,max=-50000,p;
    scanf("%d %d",&n,&m);
    int a[n][n],b[m][m];
    t=m-1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n-t;i++)
        for(j=0;j<n-t;j++){
            p=0;
            for(k=0;k<m;k++)
                for(l=0;l<m;l++){
                    b[k][l]=a[i+k][j+l];
                    p+=b[k][l];
                }
            if(p>max)
            {
                max=p;
            }
        }

    printf("%d",max);
    return 0;
}
