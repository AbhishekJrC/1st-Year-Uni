#include<stdio.h>
void arr(int *a,int b,int *max){
    *max=-2147483648;
    printf("All Elements Of Array Are : ");
    for(int i=0;i<b;i++){
        printf("%d ",a[i]);
        if(a[i]>*max){
            *max=a[i];
        }
    }
    
}
int main(){
    int a,max;
    printf("Enter The Size Of 1D Array : ");
    scanf("%d",&a);
    int b[a];
    printf("Enter All The Elements Of Array : ");
    for(int i=0;i<a;i++)
        scanf("%d",&b[i]);
    arr(b,a,&max);
    printf("\nMaximum Value : %d",max);
}