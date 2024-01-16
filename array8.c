#include <stdio.h>
int main()
{
    int n[4][4],i,j,count=1,row[4]={0},col[4]={0},sumdia1=0,sumdia2=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            n[i][j]=count;
            count++;
        }
    }
    printf("Values Of Array Are : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d\t",n[i][j]);
        printf("\n");
    }
    printf("\nSum Of Elements Of Each Rows Are : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            row[i]+=n[i][j];
            if(i==j)
            sumdia1+=n[i][j];
            if(i+j==3)
            sumdia2+=n[i][j];
        }
        printf("%d\n",row[i]);
    }
    printf("\nSum Of Elements Of Each Column Are : \n");
    for(j=0;j<4;j++){
        for(i=0;i<4;i++)
            col[j]+=n[i][j];
        printf("%d\t",col[j]);
    }
    printf("\nSum Of Elements Of 1st Diagonal = %d ;\nSum Of Elements Of 2nd Diagonal = %d ;",sumdia1,sumdia2);
    return 0;
}