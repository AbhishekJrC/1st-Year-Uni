//print submition from 1 to 10 using recursion.

#include <stdio.h>

int func(int x){
    int y=0;
    x++;
    printf("%d\n",x);    
    if(x<10)
    x+=func(x);

    return x;
}
int main(){
    int a =0,b;
    b = func(a);
    printf("sum = %d",b);

    return 0;
}