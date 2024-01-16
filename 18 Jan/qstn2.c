#include<stdio.h>
struct data{
    int dd,mm,yy;
};
void fun(struct data *p){
    printf("Enter Both Dates In DD MM YYYY Formate : ");
    scanf("%d%d%d%d%d%d",&(p->dd),&(p->mm),&(p->yy),&((p+1)->dd),&((p+1)->mm),&((p+1)->yy));
    if(p->yy>(p+1)->yy){
        printf("Second Date Is Earlier.");
        return;
    }
    else if(p->yy<(p+1)->yy){
        printf("First Date Is Earlier.");
        return;
    }
    else{
        if(p->mm>(p+1)->mm){
            printf("Second Date Is Earlier.");
            return;
        }
        else if(p->mm<(p+1)->mm){
            printf("First Date Is Earlier.");
            return;
        }
        else{
            if(p->dd>(p+1)->dd){
            printf("Second Date Is Earlier.");
            return;
            }
            else if(p->dd<(p+1)->dd){
            printf("First Date Is Earlier.");
            return;
            }
            else{
                printf("Both Dates Are Same.");
            }
        }
    }
}
int main(){
    struct data s[2];
    fun(s);
    return 0;
}