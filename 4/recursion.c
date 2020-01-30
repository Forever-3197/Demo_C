#include<stdio.h>

int factorial(unsigned int i);
int fibonaci(int i);

int factorial(unsigned int i){
    if (i <= 1){
        return 1;
    }
    return i * factorial(i-1);
}

int fibonaci(int i){
    if (i == 0){
        return 0;
    }
    if (i == 1){
        return 1;
    }
    return fibonaci(i-1)+fibonaci(i-2);
}

int main(){
    printf("\n");
    printf("阶乘函数:\n");
    printf("Factorial of 5 is %d\n",factorial(5));
    
    printf("\n");
    int i;
    printf("斐波那契数列:\n");
    for(i = 0; i < 10; i++){
        printf("%d\t",fibonaci(i));
    }
    printf("\n");
}