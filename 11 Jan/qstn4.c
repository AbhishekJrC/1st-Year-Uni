#include<stdio.h>
int c;
void arr(int (*a)[c],int b,int *max){
    *max=-2147483648;
    printf("All Elements Of Array Are : \n");
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
            if(a[i][j]>*max){
                *max=a[i][j];
            }
        }
        printf("\n");
    }
    
}
int main(){
    int a,max;
    printf("Enter The Dimension Of 2D Array : ");
    scanf("%d%d",&a,&c);
    int b[a][c];
    printf("Enter All The Elements Of Array : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }
    arr(b,a,&max);
    printf("\nMaximum Value : %d",max);
}