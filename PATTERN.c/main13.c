#include <stdio.h>

int main()
{
    int i,j;
    for(i=4;i>=1;i--)
        {
            for(j=1;j<i;j++)
                {
                    printf(" ");
                }
            for(j=4;j>=i;j--)
                {
                    printf("1 ");
                }
            printf("\n");
        }
    return 0;
}

