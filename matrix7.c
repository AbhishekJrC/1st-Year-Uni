#include <stdio.h>
int main()
{
    int count=1,temp;
    int a[4][4];
    printf("Given Matrix Is : \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            a[i][j]=count;
            printf("%d\t",a[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nGiven Matrix After Value Enterchange Is : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp=a[i][j];
            a[i][j]=a[i+2][j+2];
            a[i+2][j+2]=temp;
            temp=a[i+2][j];
            a[i+2][j]=a[i][j+2];
            a[i][j+2]=temp;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
