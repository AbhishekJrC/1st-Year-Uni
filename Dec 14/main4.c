//Length of input string...

#include<stdio.h>
int main(){
    char c[15];
    int i=0;
    printf("Enter A String : ");
    scanf("%[^\n]s",c);
    while(1){
        if(c[i]=='\0')
        break;
        i++;
    }
    printf("Length Of String Is %d",i);
    return 0;
}

