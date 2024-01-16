//display each digit of a number using recursion.

#include<stdio.h>

int func(int x){
    int y=0,z=x;    
    if(x>9){
        x/=10;
        y = func(x);        
    }   
    printf("%d\n",z-10*y);
    return z;
}
int main(){
    int a=9650356,b;
    b = func(a);

    return 0;
}