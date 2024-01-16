#include<stdio.h>
void arr(int *a,int b,int ind){
    int x=a[ind];
    for(int i=0;i<b;i++){
        if(i!=ind){
            a[i]+=x;
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
    int ind;
    printf("Enter The Index Whose Value You Want To Add To All Elements : ");
    scanf("%d",&ind);
    arr(b,a,ind);
    printf("All Elements Of Array Are : ");
    for(int i=0;i<a;i++){
        printf("%d ",b[i]);
    }
}