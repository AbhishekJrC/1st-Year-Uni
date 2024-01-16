#include<stdio.h>
struct data{
    int id;
    char name[30];
    float bs;
};
void fun(struct data *p){
    printf("Enter Details Of All 3 Employees : \n");
    for(int i=0;i<3;i++){
        printf("Id No. : ");
        scanf("%d",&((*(p+i)).id));
        printf("Name : ");
        getchar();
        scanf("%[^\n]s",(*(p+i)).name);
        printf("Basic Salary : ");
        scanf("%f",&((*(p+i)).bs));
    }
}
int main(){
    struct data s[3];
    fun(s);
    for(int i=0;i<3;i++){
        printf("\nId No. : %d",s[i].id);
        printf("\nFirst Name : %s",s[i].name);
        printf("\nGross Salary : %f",(((s[i].bs)*30.0)/100)+s[i].bs);
    }
    int z=s[0].bs+s[1].bs+s[2].bs;
    printf("\nTotal Amount Paid To Employees Are : %f",z+((30.0*z)/100));
    return 0;
}