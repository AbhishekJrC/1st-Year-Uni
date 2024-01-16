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
    for(i=3;i>=1;i--)
        {
            for(j=3;j>=i;j--)
                {
                    printf(" ");
                }
            for(j=1;j<=i;j++)
                {
                    printf("1 ");
                }
            printf("\n");
        }
    return 0;
}

