#include <stdio.h>
int main()
{
    int i,j,a,b,count=1,k;
    printf("Enter Dimension Of Matrix : ");
    scanf("%d%d",&a,&b);
    int n[a][b];
    printf("Values of Matrix Are : \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            n[i][j]=count;
            printf("%d\t",n[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("Required Place Values Are : \n");
    for(k=0;k<a;k++){
        j=0;
        for(i=k;i>=0&&j<b;i--){
                printf("%d\t",n[i][j]);
                j++;
        }
        printf("\n");
    }
    for(k=1;k<b;k++){
        i=a-1;
        j=k;
        for(i;i>k;i--){
                printf("%d\t",n[i][j]);
                j++;
        }
        printf("\n");
    }
    
    return 0;
}
