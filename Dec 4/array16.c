#include<stdio.h>
int main(){
    int a[]={2,9,6,4,1,3,7},s=0;
    for(int i=1;i<7;i++)
    {
        a[i]+=a[i-1];
    }
    for(int i=0;i<7;i++)
        printf("%d ",a[i]);
    return 0;
}
