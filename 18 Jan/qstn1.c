#include<stdio.h>
struct data{
    int roll;
    char name[30];
    float cgpa;
};
void fun(struct data *p){
    printf("Enter Details Of All 5 Students : \n");
    for(int i=0;i<5;i++){
        printf("Roll No. : ");
        scanf("%d",&((*(p+i)).roll));
        printf("Name : ");
        getchar();
        scanf("%[^\n]s",(*(p+i)).name);
        printf("CGPA : ");
        scanf("%f",&((*(p+i)).cgpa));
    }
}
int main(){
    struct data s[5];
    fun(s);
    for(int i=0;i<5;i++){
        printf("Roll No. : %d",s[i].roll);
        printf("\nFirst Name : %s",s[i].name);
        printf("\nCGPA : %f",s[i].cgpa);
    }
    return 0;
}