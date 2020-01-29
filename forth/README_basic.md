# 头文件

## 引用头文件
*关键字：*　**#include**

- "my.h"  ==>应用用户头文件，在编译时可以通过－ｌ选项将目录前置在该列表前；
- <stdio.h>　==>应用用户和系统头文件，在编译时可以通过－ｌ选项将目录前置在该列表前；

## 只引用一次头文件

引用同一头文件多次会导致编译错误！！
> 避错手法：
```c
#ifndef HEADER_FILE
    #define HEADER_FILE
#endif
```

## 有条件引用
```c
#if SYSTEM_1
    #define "system_1.h"
#elif SYSTEM_2
    #define "system_2.h"
#elif SYSTEM_3
    #define "system_3.h"
    ...
#endif
```
一般如果头文件太多时，通常采用宏定义的方式，以方便替换
```c
#define SYSTEM_H "system_1.h"
...

#include SYSTEM_H
```
这样的话，机制需要修改宏定义就一切修改ｏｋ

# 强制类型转换
> 应用：`(type_name) expression`
```c
int main(){
    int sum = 17, count = 5;
    double mean;
    mean = (double) sum / count;
    //强制转换的优先级高于除法运算，因此sum会优先被转换成double型
    printf("Value of mean : %f\n",mean);
}
```

## 整数提升
---
整数提升是指把小于int或者unsigned int的整数转换成int或者unsigned int的过程

```c
int main(){
    int i = 17, c = 'c';//ascii 99
    int sum;
    sum = i + c;
    printf("Value of sum : %d\n",sum);
}
```
在这里，sum的值为１１６，因为编译器进行了整数提升，把'c'的值转换成ascii数值，然后在进行的运算。

## 常用的算术运算
---
算术转换是隐式地把值强制转换为相同的类型：编译器首先执行整数提升，如果操作数类型不同，则就会被转换成内涵的最高层次类型。
> 级别展示：long double > double > float > unsigned long long > long long > unsigned long > long > unsigned int > int

```c
int main(){
    int i = 17, c = 'c';//ascii 99
    int sum;
    sum = i + c;
    printf("Value of sum : %d\n",sum);
}
```
上述函数中，由于最后的值是`double`类型的，所以编译器在统一类型时，把`ｉ`和`ｃ`均转换成`float`类型！！！