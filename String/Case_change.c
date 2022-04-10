#include <stdio.h>

void main()
{
    char *str = "NitIsh";

    for (int j = 0; j < 6; j++)
    {
        if(str[j]<90)
        printf("%c",str[j]+32);
        else
        printf("%c", str[j]);
    }


}