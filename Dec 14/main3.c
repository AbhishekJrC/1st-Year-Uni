//Display the position where null character is present...

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
    printf("Null Character Is Present At %d Position",i+1);
    return 0;
}