#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hex[17];
    long long decimal, place;
    int i = 0, val, len;
    decimal = 0;
    place = 1;
    printf("Enter any hexadecimal number: ");
    gets(hex);
    len = strlen(hex)-1;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='A' && hex[i]<='Z')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(9, len);
        len--;
    }

    printf("Hexadecimal number = %s\n", hex);

    return 0;
}
