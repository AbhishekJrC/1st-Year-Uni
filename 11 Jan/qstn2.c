#include<stdio.h>
float avg(int a,int b,int *max,int *min){
    if(a>b){
        *max=a;
        *min=b;
    }
    else{
        *max=b;
        *min=a;
    }
    return (a+b)/2.0;
}
int main(){
    int a,b,max,min;
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&a,&b);
    float r=avg(a,b,&max,&min);
    printf("Average = %f",r);
    printf("\nMax = %d",max);
    printf("\nMin = %d",min);
}