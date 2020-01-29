#include<stdio.h>
#include<string.h>

//公用体结构定义
union  Data
{
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    printf("Memory size occupied by data : %d \n",sizeof(data));
    
//访问刷新共用体
data.i = 10;
data.f = 220.5;
strcpy(data.str,"C Programming");
printf("data.i : %d\n",data.i);
printf("data.f : %f\n",data.f);
printf("data.str : %s\n",data.str);
printf("数据输出错乱，也就是一个时间里只允许一个成员携带完整数据，后一次的赋值会覆盖前一次的赋值\n");
printf("\n");
data.i = 10;
printf("data.i : %d\n",data.i);
data.f = 220.5;
printf("data.f : %f\n",data.f);
strcpy(data.str,"C Programming");
printf("data.str : %s\n",data.str);
    return 0;
}
