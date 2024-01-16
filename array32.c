#include <stdio.h>
int main()
{
    int i,j,a,b,c,d,count=1,k;
    printf("Enter Dimension Of Matrix : ");
    scanf("%d%d",&a,&b);
    int n[a][b];
    printf("\nValues of Matrix Are : \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            n[i][j]=count;
            printf("%d\t",n[i][j]);
            count++;
        }
        printf("\n");
    }
    printf("\nEnter Quardinate Whose Surounding You Want To Found : ");
    scanf("%d%d",&c,&d);
    printf("\nRequired Place Values Are : \n");
    if(c==0){
        i=0;
    }
    else{
        i=c-1;
    }
    if(d==0){
        k=0;
    }
    else{
        k=d-1;
    }
    for(i;i<=c+1&&i<a;i++){
        for(j=k;j<b&&j<=d+1;j++){
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

