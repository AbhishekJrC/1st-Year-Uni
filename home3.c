#include<stdio.h>
int main(){
int a[5],*c,*b,d,temp;
c=a;
printf("Enter The Amount Of Numbers You Want To Enter(Must Be Even) : ");
scanf("%d",&d);
printf("Enter %d Values For Array : ",d);
for(int i=0;i<d;i++){
    scanf("%d",c+i);
}
b=a+(d/2);
for(int i=0;i<(d/2);i++){
    temp=*(c+i);
    *(c+i)=*(b+i);
    *(b+i)=temp;
}
printf("Values Of Array After Swapping Are : ");
for(int i=0;i<d;i++){
    printf("%d, ",*(c+i));
}
printf("\b\b;");
return 0;
}
