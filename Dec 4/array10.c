#include<stdio.h>
int main(){
    int n,i,k,j=0;
    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d",&n);
    i=n;
    l1:
    k=i;
    j=0;
    l2:   
    printf("%d ",k);
    k--;
    j++;
    if(j<i) goto l2;
    printf("\n");
    i--;
    if(i>0) goto l1;
    return 0;
}