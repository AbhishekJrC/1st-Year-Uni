
#include <stdio.h>
int main()
{
    int m,n,o,p,q,r;
    printf("Enter The Dimensions Of The Matrix : ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter The Matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);   
        }
    }
    printf("\nEnter The Starting Coordinate : ");
    scanf("%d%d",&o,&p);
    printf("\nEnter The Ending Coordinate : ");
    scanf("%d%d",&q,&r);
    printf("\nRequired Path : (%d,%d) ",o,p);
    check:
    if(o>0&&a[o-1][p]==1){
        a[o][p]=0;
        o=o-1;
        printf("(%d,%d) ",o,p);
    }
    else if(p>0&&a[o][p-1]==1){
        a[o][p]=0;
        p=p-1;
        printf("(%d,%d) ",o,p);
    }
    else if(o<m-1&&a[o+1][p]==1){
        a[o][p]=0;
        o=o+1;
        printf("(%d,%d) ",o,p);
    }
    else if(p<n-1&&a[o][p+1]==1){
        a[o][p]=0;
        p=p+1;
        printf("(%d,%d) ",o,p);
    }
    if(o!=q||p!=r){
        goto check;
    }
    
    return 0;
}

