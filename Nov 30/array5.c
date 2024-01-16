#include <stdio.h>
int main()
{
    int n[3][4],i,j=3,count=1;
    for(i=2;i>=0;i--){
        if(j>0){
            for(j=3;j>=0;j--){
                n[i][j]=count;
                count++;
            }
        }
        else{
            for(j=0;j<=3;j++){
                n[i][j]=count;
                count++;
            }
        }
    }
    
    printf("Values Of Array Are : \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            printf("%d\t",n[i][j]);
        printf("\n");
    }
    return 0;
}