## 共用体 结构体
` 定义：允许在相同的内存位置存储不同的数据类型

定义一个带有多个成员的共用体,任何时候`只有一个成员带有值`。

*关键字*：**_union_**



## 位域 结构体
定义：结构中包含多个*开关量*，只有true和false量

> 位域结构：起始4字节 --> 8字节
```C
struct {
    unsigned int width : 1;//占用1位，位符号：width
    unsigned int heigh : 1;//占用1位，位符号：heigh
};
```
> 简单的结构：起始8字节
```c
struct {
    unsigned int width;//int 类型4字节宽
    unsigned int heigh;//int 类型4字节宽
}
```
```c
struct {
    unsigned float area;//float 类型8字节宽
}
```
```c
struct {
    unsigned char str;//char 类型8字节宽
}
```
