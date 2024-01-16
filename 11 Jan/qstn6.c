#include<stdio.h>
int c;
void arr(int (*a)[c],int b,int (*d)[c]){
    
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            d[i][j]=a[i][j];
        }
    }
    
}
int main(){
    int a,max;
    printf("Enter The Dimension Of 2D Array : ");
    scanf("%d%d",&a,&c);
    int b[a][c],d[a][c];
    printf("Enter All The Elements Of Array : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }
    arr(b,a,d);
    printf("\nValues Of Second Array Are : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++)
            printf("%d ",d[i][j]);
        printf("\n");
    }
}