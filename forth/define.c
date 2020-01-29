#include<stdio.h>

//字符串常量化
#define message_for(a,b)\
    printf(#a" and " #b " : we love you !\n")

//标记粘贴运算符
#define tokenpaster(n) printf("token" #n "= %d",token##n)

//defined()　运算符
#if !defined(MESSAGE)
    #define MESSAGE "You wish!"
#endif

//参数化的　宏
#define Max(x,y) ((x) > (y) ? (x) : (y))

int main(){
    printf("File : %s\n",__FILE__);
    printf("Date : %s\n",__DATE__);
    printf("Time : %s\n",__TIME__);
    printf("Line : %d\n",__LINE__);//这一行在第7行，返回行号为 7
    printf("ANSI : %d\n",__STDC__);

    printf("\n");
    printf("字符串常量化输出：\n"); 
    message_for(Carole,Debra);

    printf("\n");
    printf("标记粘贴运算符输出：\n"); 
    int token34 = 40;
    tokenpaster(34);
    printf("\n");

    printf("\n");
    printf("defined()　运算符输出：\n"); 
    printf("here is the message: %s\n",MESSAGE);

    printf("\n");
    printf("参数化的　宏 输出：\n"); 
    printf("Max between 20 and 10 is %d\n",Max(10,20));

    return 0;
}