//Display the matrix

#include <stdio.h>
int main()
{
    int m,n,count=1;
    printf("Enter The Dimensions Of Matrix : ");
    scanf("%d%d",&m,&n);
    printf("Required Matrix is : \n");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=count;
            printf("%d\t",a[i][j]);
            count++;
        }
        printf("\n");
    }

    return 0;
}