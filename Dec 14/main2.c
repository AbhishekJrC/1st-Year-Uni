//Reverse first 5 characters 

#include<stdio.h>
int main(){
    char c[15],temp;
    printf("Enter Your Name : ");
    scanf("%[^\n]s",c);
    temp=c[0];
    c[0]=c[4];
    c[4]=temp;
    temp=c[1];
    c[1]=c[3];
    c[3]=temp;
    printf("Your Name Is %s",c);
    return 0;
}

