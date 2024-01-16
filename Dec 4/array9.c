#include<stdio.h>
int main(){
    int n,i=2;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    l:
    printf("%d ",n);
    n-=i;
    i+=2;
    if(n>=1) goto l;
    return 0;
}