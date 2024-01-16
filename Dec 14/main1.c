//String of your name and display it..

#include<stdio.h>
int main(){
    char c[15];
    printf("Enter Your Name : ");
    scanf("%[^\n]s",c);
    printf("Your Name Is %s",c);
    return 0;
}
