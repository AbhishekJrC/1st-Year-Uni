#include<stdio.h>
int fun(int a,int b,char c){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            printf("%c ",c);
        printf("\n");
    }
}
int main(){
    int a,b;
    char c;
    printf("Enter Number Of Lines,Symbol Per Line and 1 Symbol Respectively : ");
    scanf("%d%d",&a,&b);
    getchar();
    scanf("%c",&c);
    fun(a,b,c);
    return 0;
}