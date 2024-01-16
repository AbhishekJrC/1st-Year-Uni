#include<stdio.h>
void fab(int a){
    int b=1,c=1,d;
    printf("Fabinacci Series : 1 1 ");
    for(int i=3;i<=a;i++){
        d=b+c;
        b=c;
        c=d;
        printf("%d ",d);
    }
    printf("\n\n%d Number In Fabinacci Series Is : %d",a,c);
}
int main(){
    int a;
    printf("Enter A Number : ");
    scanf("%d",&a);
    fab(a);
    return 0;
}