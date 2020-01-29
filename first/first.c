#include<stdio.h>

//变量声明
extern int a, b;
extern int c;
extern float f;

int main(){
    int a,b;
    int c;
    float f;

    //initial data
    a = 10;
    b = 20;
    c = a+b;
    printf("value a+b=%d\n",c);
    
    f = 70.0/3.0;
    printf("value 70/3=%f\n",c);
    return 0;

}