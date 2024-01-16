//Addition of 2 matrix...

#include <stdio.h>
int main()
{
    int m,n,count=1;
    printf("Enter The Dimensions Of Matrix : ");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Given Matrix is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=count;
            printf("%d\t",a[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nAnd\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]=count;
            printf("%d\t",b[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nSum Of Matrixes Are : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
