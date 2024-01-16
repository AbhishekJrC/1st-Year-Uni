#include <stdio.h>
int main(){
    int n[15],count,place=0,j;
    for(int i=1;i<=5;i++){
            count=1;
            for(j=1;j<=i;j++){
                n[place]=count;
                place++;
                count++;
            }
    }
    printf("Values In Array Are : ");
    for(int i=0;i<15;i++)
    printf("%d ",n[i]);
    return 0;
}