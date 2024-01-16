#include<stdio.h>
int fun(int a,int b,char c){
    int r;
    if(c=='*')
    r=a*b;
    if(c=='+')
    r=a+b;
    if(c=='-')
    r=a-b;
    if(c=='/')
    r=a/b;
    if(c=='%')
    r=a%b;
    printf("Result : %d",r);
}
int main(){
    int a,b;
    char c;
    printf("Enter 2 Number and 1 Operator Respectively : ");
    scanf("%d%d",&a,&b);
    getchar();
    scanf("%c",&c);
    fun(a,b,c);
    return 0;
}