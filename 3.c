#include <stdio.h>
int isUgly(int n){
    if (n==1) return 1;
    if (n<=0) return 0;
    if (n%2==0) return (isUgly(n/2));
    if (n%3==0) return (isUgly(n/3));
    if (n%5==0) return (isUgly(n/5));
    return 0;
}
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    int a[n*n];
    for(i=1;i<n*n*2;i++,k++)
    {
        j=isUgly(i);
        /*if(j==1)
            a[k]=i;
        else*/
            k--;
    }
    printf("%d",a[n-1]);
    return 0;
}
