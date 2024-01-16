//Reverse the string...

#include<stdio.h>
int main(){
    char c[15],temp;
    int i=0,j;
    printf("Enter A String : ");
    scanf("%[^\n]s",c);
    while(1){
        if(c[i]=='\0')
        break;
        i++;
    }
    j=i-1;
    i=0;
    while(i<j){
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
    }
    printf("Reverse string : %s",c);
    return 0;
}

