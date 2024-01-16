#include<stdio.h>
int main(){
int a[5],*c;
c=a;
printf("Enter 5 Values For Array : ");
for(int i=0;i<5;i++){
    scanf("%d",c+i);
}
printf("Values Of Array In Reverse Order Are : ");
for(int i=4;i>=0;i--){
    printf("%d, ",*(c+i));
}
printf("\b\b;");
return 0;
}