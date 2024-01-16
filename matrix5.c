// Transpose of square matrix

#include <stdio.h>
int main()
{
    int m,count=1,temp;
    printf("Enter The Dimensions Of Square Matrix : ");
    scanf("%d",&m);
    int a[m][m];
    printf("Given Matrix is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            a[i][j]=count;
            printf("%d\t",a[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nTranspose Of Matrix Is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
