#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=6;i++)
        {   if(i%2==0)
                {
                    for(j=1;j<=i;j++)
                        {
                            printf("%d",j);
                        }
                }
            else
                {
                    for(j=1;j<=i;j++)
                        {
                            printf("1");
                        }
                }
            printf("\n");
                
        }
    return 0;
}

