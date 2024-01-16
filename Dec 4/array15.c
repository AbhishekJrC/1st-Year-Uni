#include<stdio.h>
int main(){
    int a[]={1,9,6,4,3,2,7,8},temp;
    for(int i=0,j=6;i<3;i+=2,j-=2)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        temp=a[i+1];
        a[i+1]=a[j+1];
        a[j+1]=temp;
    }
    for(int i=0;i<8;i++)
        printf("%d ",a[i]);
    return 0;
}