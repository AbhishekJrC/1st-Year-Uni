//find gcd of 2 numbers.

#include<stdio.h>

void func(int a, int b,int *q){
    int c = b%a,d,e;   //b>a.
    if(c!=0){
    printf("%d,%d\n",c,a);
    func(c,a,q);
    }else{
    *q=a; 
    }    
}
int main(){
    int x=24,y=33,z;
    func(x,y,&z);
    printf("%d",z);

    return 0;
}