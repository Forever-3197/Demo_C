# 命令行　参数
命令行参数是在使用main()主函数来处理的，其中`argc`时只传入参数个数，`argv[]`是一个指针数组，指向传递给程序的每一个参数
```c
#include<stdio.h>

int main(int argc, char *argv[]){
    if (argc == 2)
    {
        printf("The process is %s\n",argv[0]);
        printf("The argument supplied is %s\n",argv[１]);
    }
    else if (argc > 2)
    {
        printf("The value of argc is %s\n",argc);
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("The value of argc is %s\n",argc);
        printf("One argument expected.\n");
    }
}
```
### argv[0]存储程序的名称，argv[１]是指向第一个命行参数的指针，*argv[n]是最后一个命行参数
### 多个命令行之间用空格间隔起来，如果参数本带有空格，将参数整体用双引号""或者单引号''包括起来
### 对于argc，当没有提供任何参数时将为１；当传递一个参数时将为２；argc的数值会根据传入参数的个数自动修正！

>测试：
1. ./a.out test
2. ./a.out test1 test2
3. ./a.out 
4. ./a.out 'test test2'