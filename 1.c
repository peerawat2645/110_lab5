#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,c,d=0;
    scanf("%d",&n);
    char stack[n],a[n];
    int s[n];
    for(i=0;i<n;i++)
    {
        s[d]=0;
        scanf("%s",stack);
        k=strlen(stack);
        if(!(strcmp(stack,"-")))
        {
            s[d-2]-=s[d-1];
            d--;
        }
        else if(!(strcmp(stack,"+")))
        {
            s[d-2]+=s[d-1];
            d--;
        }
        else if(!(strcmp(stack,"*")))
        {
            s[d-2]*=s[d-1];
            d--;
        }
        else
        {
            for(j=0;j<k;j++)
            {
                c=k-j-1;
               if(c==0)
                    s[d]+=(stack[j]-48);
                else
                    s[d]+=(stack[j]-48)*10;
            }
            d++;
        }
    }
    printf("%d\n" ,s[0]);
    return 0;
}
