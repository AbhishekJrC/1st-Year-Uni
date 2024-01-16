#include<stdio.h>
int main(){
    int a[]={1,9,6,4,3,2,7,8},temp;
    for(int i=0,j=7;i<4;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<8;i++)
        printf("%d ",a[i]);
    return 0;
}