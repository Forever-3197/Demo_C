#include<stdio.h>
int main(){
    
        printf("85    十进制\n");
        printf("0213  八进制\n");//前缀0表示8进制
        printf("0x4b  十六进制\n");
        printf("30    整数\n");
        printf("30u   无符号整数\n");
        printf("30l   长整数\n");
        printf("30ul  无符号长整数\n");
    printf(" \n");
    printf("3.14159     合法\n");
    printf("314159E-5L  合法\n");
        printf(" \n");
        printf("转义字符：\n");
printf("const关键字定义常量\n");
const int length = 10;
const int width = 5;
const char newline = '\n';
int area;
area = length * width;
printf("value of area: %d",area);
printf("%c",newline);


    return 0;

}