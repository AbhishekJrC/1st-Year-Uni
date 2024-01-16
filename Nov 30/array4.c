#include <stdio.h>
int main()
{
    int n[3][4],i,j,count=1;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            n[j][i]=count;
            count++;
        }
    }
    printf("Values Of Array Are : \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("%d\t",n[i][j]);
        printf("\n");
    }
    return 0;
}
