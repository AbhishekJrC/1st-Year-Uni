#include<stdio.h>
int fun(int a,char c){
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++)
            printf("%c ",c);
        printf("\n");
    }
}
int main(){
    int a;
    char c;
    printf("Enter the Number Of Lines and 1 Symbol Respectively : ");
    scanf("%d",&a);
    getchar();
    scanf("%c",&c);
    fun(a,c);
    return 0;
}