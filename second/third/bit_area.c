#include<stdio.h>
#include<string.h>

//定义结构体
struct bs
{
    int a:1;
    int b:3;
    int c:4;
};//以上定义的bs结构中位域a占8位宽、位域b占2位宽、位域c占6位宽

void main(){
    printf("一个位域必须存储在同一个字节中，不能跨越两个字节，也就是最多8位宽！\n一个位域剩余空间不够存放下一个位域，应该从下一个字节开始存放：\n");
    printf("\t实例:\n");
    printf("\tstruct bs{\n");
    printf("\t\tint a:4;\n");
    printf("\t\tint  :4;//用空域占位，但空域不能使用\n");
    printf("\t\tint b:5;\n");
    printf("\t}\n");
    printf("\n");
    struct bs bit,*pbit;
   
    bit.a = 1;//给位域赋值
    bit.b = 7;
    bit.c = 15;
    printf("位域输出：%d,%d,%d\n",bit.a,bit.b,bit.c);//以整形量输出

    pbit = &bit;//将bit的地址存到指针pbit中
    pbit->a = 0;//用指针方式对位域进行赋值
    pbit->b &=3;
    pbit->c |=1;
    printf("位域输出：%d,%d,%d\n",pbit->a,pbit->b,pbit->c);//以指针方式输出三个域的值

}
