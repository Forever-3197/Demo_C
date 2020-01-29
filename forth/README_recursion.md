# 递归调用
定义：以自相似的方式重复项目的处理过程
>用法：注意函数退出条件，避免死循环
```c
void recursion(){
    recursion();    //函数调用自身
}

int main(){
    recursion();
}
```
# 阶乘函数
```c
void factorial(unsigned int i){
    if (i <= 1){
        return 1;
    }
    return i*factorial(i-1);
}

int main(){
    printf("Factorial of 15 is %d\n",i,factorial(15));
}
```

# 斐波那契数列
```c
void fibonaci(int i){
    if (i == 0){
        return 0;
    }
    if (i == 1){
        return 1;
    }
    return fibonaci(i-1)+fibonaci(i-2);
}

int main(){
    int i;
    for(i = 0; i < 10; i++){
         printf("%d\t%n\n",fibonaci(i));
    }
}
```
