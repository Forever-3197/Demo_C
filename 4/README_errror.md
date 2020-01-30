# C 错误处理
关键字：`errno` 、　`perror()` 、　`strerror()`

- perror() 函数显示您传入的字符串，后跟一个冒号、空格和当前errno值的文本表示形式
- strerror() 函数，返回一个指针，指针指向当前errno值的文本形式

> 尝试打开一个文件时，往往使用下面的结构，以避免在打开文件时出错！！

*在进行错误信息输出时，有多种处理方式，应该使用stderr文件流来输出所有错误信息*

```C
#include<stdio.h>
#include<errno.h>
#include<string.h>

extern int errno;

int main(){
    FILE *fp;
    int errnum;
    fp = fopen("unexist.txt","r");
    if (fp == NULL)
    {
        errnum = errno;
        fprintf(stderr,"Value of errno: %d\n",errno);
        perror("Error printed by perror");
        fprintf(stderr,"Error opening file: %s\n",strerror(errnum));
    }
    else
    {
        fclose(fp);
    }
    return 0;
}
```

# 零除　错误
>　零除是致命错误，为了避免错误，我们通常用下面的处理方式：

```C
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

int main(){
    int dividend = 20;
    int divisor = 0;
    int quotient;
    if( divisor == 0 ){
        fprintf(stderr,"Division by zero! Exiting...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"Value of quotient : %d\n",quotient);
    exit(0);
}
```

# 程序退出状态
>通常程序在执行完一个操作退出时会带有值EXIT_SUCCESS,一般被宏定义为０；如果执行以及退出时错误，就会携带EXIT_FAILURE,一般被宏定义为－１；
```c
if( divisor == 0 ){
        fprintf(stderr,"Division by zero! Exiting...\n");
        exit(EXIT_FAILURE);//等价于exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"Value of quotient : %d\n",quotient);
    exit(EXIT_SUCCESS);//等价于exit(0);
```

