#include<stdio.h>
struct data{
    int roll;
    char name[30];
    float cgpa;
};
int main(){
    struct data s[3];
    struct data *p;
    p=s;
    printf("Enter Details Of All 3 Students : \n");
    for(int i=0;i<3;i++){
        printf("Roll No. : ");
        scanf("%d",&((*(p+i)).roll));
        printf("Name : ");
        getchar();
        scanf("%[^\n]s",(*(p+i)).name);
        printf("CGPA : ");
        scanf("%f",&((*(p+i)).cgpa));
    }
    for(int i=0;i<3;i++){
        printf("\nRoll No. : %d",(*(p+i)).roll);
        printf("\nName : %s",(*(p+i)).name);
        printf("\nCGPA : %f",(*(p+i)).cgpa);
    }
    return 0;
}