#include<stdio.h>
int main(){
    
        printf("class of remenber:\n");
        printf("auto regeister static extern\n");
printf("auto       私有变量，一般直接定义的变量默认为auto修饰\n");
printf("static     全局变量\n");
printf("extern     通常用于当有多个文件共享相同的变量和函数时，定义全局变量的修饰符\n");
printf("regeister  通常与内存存储挂钩，定义与寄存器相关的修饰符，直接关联到硬件\n");
printf("\n");
printf("逻辑运算:&& || ！（与 或 非）\n");
printf("位逻辑运算:& | ^ ～ << >>（与 或 异或 非 左移 右移，作用于数值的bit）\n");
printf("杂项运算:sizeof() & * ?: (返回变量大小 取地址符 指针符 条件表达式)\n");

printf("\n");
printf("条件语句：\n");
printf("关键字：if else switch \n");
printf("exp1 ? exp2 : exp3 \n");

printf("\n");
printf("循环语句：\n");
printf("关键字：while for do...while \n");
printf("ctrl关键字：break continue goto \n");

printf("\n");
printf("定义函数:\n");
printf("return_type function(parameter list)\n");
printf("{\n");
printf("\tbody of the function \n");
printf("}\n");
printf("函数声明：return_type function_name( parameter list)\n");

    return 0;

}