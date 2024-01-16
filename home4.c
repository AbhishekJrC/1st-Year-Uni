#include<stdio.h>
int main(){
    char c[20],*a;
    printf("Enter 4 Small Strings(less than 6 characters each) : ");
    for(int i=0;i<4;i++){
        a=c+(i*5);
        scanf("%s",a);
    }
    a=c;
    printf("String Upto First Null Character Is : %s",a);
    printf("\nAll Strings Entered Is : ");
    for(int i=0;i<4;i++){
        a=c+(i*5);
        printf("%s",a);
    }
    return 0;
}