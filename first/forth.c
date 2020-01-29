#include<stdio.h>
//声明函数
int max(int num1,int num2);
int min(int *x,int *y);
int main(){
    //局部变量
    int a = 100;
    int b = 200;
    int ret;

    //调用函数处理
    printf("传值调用：ret = max(a, b);\n");
    ret = max(a, b);
    printf("max value is: %d\n",ret);
    printf("a=%d\tb=%d\t寄存器值不变\n",a,b);

    printf("引用调用：ret = min(&a, &b);\n");
    ret = min(&a, &b);
    printf("min value is: %d\n",ret);
    printf("a=%d\tb=%d\t寄存器值改变\n",a,b);

    //声明变量的三种类型：
    printf("声明变量的三种类型：\n");
    printf("1.在函数或者块 内部 的 局部变量 声明\n");
    printf("2.在所有函数 外部 的 全局变量 声明\n");
    printf("3.在形式参数的函数参数定义中\n");
    printf("局部变量和全局变量的名称可以相同，但在函数中局部变量的值会覆盖全局变量的值,局部变量需要手动初始化才可以用\n");
    return 0;
}

int max(int num1,int num2){
    //局部变量声明
    int result;
    
    if (num1 > num2)
    {
        /* code */
        result = num1;
    }
    else
    {
        result = num2;
    }
    num1 = num1 + 111;
    num2 = num2 + 111;
    return result;
}

int min(int *x, int *y){
    int result;

    result = (*x>*y ? *y:*x);
    *x = *x + 111;
    *y = *y + 111;
}