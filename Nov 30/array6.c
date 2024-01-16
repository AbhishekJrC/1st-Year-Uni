
#include <stdio.h>
int main()
{
    int n[3][4],j,i=2,count=1;
    for(j=3;j>=0;j--){
        if(i>0){
            for(i=2;i>=0;i--){
                n[i][j]=count;
                count++;
            }
        }
        else{
            for(i=0;i<=2;i++){
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
