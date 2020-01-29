#include<stdio.h>
#include<stdarg.h>

double average(int num, ...){
    va_list valist;
    double sum = 0.0;
    int i;
//为sum个参数初始化　valist
    va_start(valist,num);
    for ( i = 0; i < num; i++)
    {
//访问所有赋值给valist的参数
        sum += va_arg(valist,int);
    }
//清理为valist保留的内存
    va_end(valist);
    return sum/num;
}

int main(){
    //调用时，第一个参数说明有几个参数传进啦，后面的数字就是要传进来的参数！！
    printf("Average of 2,3,4,5 =%f\n",average(4,2,3,4,5));
    printf("Average of 2,3,4,5 =%f\n",average(3,5,10,15));

}