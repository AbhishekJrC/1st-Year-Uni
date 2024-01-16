//Transpose of 2 matrix...

#include <stdio.h>
int main()
{
    int m,n,count=1;
    printf("Enter The Dimensions Of Matrix : ");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
    printf("Given Matrix is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=count;
            printf("%d\t",a[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nTranspose Of Matrix Is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

