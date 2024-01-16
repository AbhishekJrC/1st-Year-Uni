//Display each character of the string..

#include<stdio.h>
int main(){
    char c[15];
    int i=0;
    printf("Enter A String : ");
    scanf("%[^\n]s",c);
    printf("Each Characters Of String Are : ");
    while(1){
        if(c[i]=='\0')
        break;
        printf("%c\t",c[i]);
        i++;
    }
    printf("\nLength Of String Is %d",i);
    return 0;
}