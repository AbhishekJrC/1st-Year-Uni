#include <stdio.h>
int main()
{
    int a[8][8]={0};
    int b,c,i,j,k,l;
    printf("Enter The Coordinate Of Chess Piece Horse : ");
    scanf("%d%d",&b,&c);
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if((i==b-2&&j==c-1)||(i==b-2&&j==c+1)||(i==b-1&&j==c+2)||(i==b+1&&j==c+2)
            ||(i==b+2&&j==c+1)||(i==b+2&&j==c-1)||(i==b+1&&j==c-2)||(i==b-1&&j==c-2)){
                a[i][j]=1;
            }
        }
    }
    printf("\nCoordinates To Where Horse Piece Can Go In 2 Moves Are : ");
    for(int k=0;k<8;k++){
        for(int l=0;l<8;l++){
            if(a[k][l]==1){
                b=k;
                c=l;
                printf("\n(%d,%d) --> ",b,c);
                for(i=0;i<8;i++){
                    for(j=0;j<8;j++){
                        if((i==b-2&&j==c-1)||(i==b-2&&j==c+1)||(i==b-1&&j==c+2)||(i==b+1&&j==c+2)
                        ||(i==b+2&&j==c+1)||(i==b+2&&j==c-1)||(i==b+1&&j==c-2)||(i==b-1&&j==c-2)){
                            printf("(%d,%d), ",i,j);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
