#include <stdio.h>
int main()
{
    int n[2][3],i,j;
    printf("Enter 6 Numbers : ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
        scanf("%d",&n[i][j]);
    }
    printf("Values Entered Are : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            printf("%d ",n[i][j]);
        printf("\n");
    }
    return 0;
}
