//Multiplication of 2 matrix...

#include <stdio.h>
int main()
{
    int m,n,o,p,count=1;
    printf("Enter The Dimensions Of 1st Matrix : ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Given Matrix Is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=count;
            printf("%d\t",a[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nEnter The Dimensions Of 2nd Matrix : ");
    scanf("%d%d",&o,&p);
    int b[o][p],c[m][p];
    count=1;
    printf("\nGiven Matrix Is : \n");
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            b[i][j]=count;
            printf("%d\t",b[i][j]);
            count++;
        }
        printf("\n");
    }
    if(n!=o){
        printf("Given Matrix cannot be Multiplied");
        return 0;
    }
    printf("\nMultiplication Of Given Matrixes Are : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

