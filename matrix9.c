#include <stdio.h>
int main()
{
    int count=1,k;
    int a[4][4],b[2][2];
    printf("Given Matrix Is : \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            a[i][j]=count;
            printf("%d\t",a[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nRequired Matrix Is : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            b[i][j]=0;
            for(k=0;k<2;k++){
                b[i][j]+=a[i][k]*a[k][j+2];
            }
            
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}


