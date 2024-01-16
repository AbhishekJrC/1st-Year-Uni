#include<stdio.h>
int main()
{
    int i,j,num,n;
    printf("Enter Number Of Rows : ");
    scanf("%d",&n);
    num=n*(n+1)/2;
    for(i=n;i>=1;i--)
        { 
            for(j=1;j<=i;j++)
                {   
                    printf("%d\t",num);
                    num--;
                }
            printf("\n");
        }
    return 0;
}

