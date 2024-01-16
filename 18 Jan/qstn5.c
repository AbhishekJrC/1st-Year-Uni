#include<stdio.h>
struct data{
    int roll;
    char name[30];
    int sub[3];
    float avg;
};
void fun(struct data *p){
    printf("Enter Details Of All 3 Students : \n");
    for(int i=0;i<3;i++){
        printf("Roll No. : ");
        scanf("%d",&((*(p+i)).roll));
        printf("Name : ");
        getchar();
        scanf("%[^\n]s",(*(p+i)).name);
        printf("Marks Of 3 Subjects : ");
        scanf("%d%d%d",&((*(p+i)).sub[0]),&((*(p+i)).sub[1]),&((*(p+i)).sub[2]));
    }
}
void cal(struct data *p){
    for(int i=0;i<3;i++){
        p[i].avg=((*(p+i)).sub[0]+(*(p+i)).sub[1]+(*(p+i)).sub[2])/3.0;
    }
}
int main(){
    struct data s[5];
    fun(s);
    cal(s);
    for(int i=0;i<3;i++){
        printf("\nRoll No. : %d",s[i].roll);
        printf("\nFirst Name : %s",s[i].name);
        printf("\nAverage : %f",s[i].avg);
    }
    return 0;
}