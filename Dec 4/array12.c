#include<stdio.h>
int main(){
    int n,a[10];
    printf("ENTER THE NUMBER OF ELEMENTS(<10): ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}