#include<stdio.h>
int main(){
    char c[20];
    printf("Enter A String : ");
    scanf("%s",c);
    int i=0;
    while(c[i]!=0)
    i++;
    i--;
    for(i;i>=0;i--){
        for(int j=i;j>=0;j--)
            printf("%c ",c[j]);
        printf("\n");
    }
    return 0;
}