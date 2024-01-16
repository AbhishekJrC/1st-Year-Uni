//display each digit of a number backwords using recursion.

#include<stdio.h>

int func(int x){
    int y=0,z=x;    
    if(x>9){
        x/=10;
        printf("%d\n",z-10*x);
        y = func(x);        
    }else{
        printf("%d\n",x);
    }       
    return z;
}
int main(){
    int a=9650356,b;
    b=func(a);
    printf("the number is %d",b);

    return 0;
}