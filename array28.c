#include <stdio.h>
int main()
{
    int i,j,a,count=1;
    printf("Enter Dimension Of Odd Square Matrix : ");
    scanf("%d",&a);
    int n[a][a];
    printf("\nValues of Matrix Are : \n");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            n[i][j]=count;
            printf("%d\t",n[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nRequired Place Values Are : \n");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(j<=(a/2)&&i+j<a&&j<=i)
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
