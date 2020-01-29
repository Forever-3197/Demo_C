//指针环节
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void getSeconds(unsigned long *par);
int *getRandom();

int main(){

    int var1;
    char var2;
    printf("var1 变量地址：%x\n",&var1);
    printf("             %o\n",&var1);
    printf("             %d\n",&var1);
    printf("定义指针：\n");
    printf("type *var_Name  例如：\n");
    printf("\t\tint\t*ip\n");
    printf("\t\tdouble\t*ip\n");
    printf("\t\tfloat\t*ip\n");
    printf("\t\tchar\t*ip\n");

//实例：
int var = 20;
int *ip = NULL;
ip = &var;//指针变量中存储var的地址
printf("实例：\n");
printf("\tAddress of var variable: %x\n",&var);
//显示变量地址
printf("\tAddress stored in ip variable: %x\n",ip);
//显示变量地址上存放的数值
printf("\tValue of *ip variable: %d\n",*ip);
printf("Warning:没有确切的地址来赋值给指针变量，通常是赋值 NULL\t例如：int *p=NULL\n");
printf("通识理解：& 取地址符号\t* 取值符号\n");
printf("\n");
printf("指针变量和常变量一样代表的是数值，可以进行算术运算、访问、赋值\n");

//指针和指针数组
int vars[3]={10,100,200};
int *ptr[3];
int *pt;
int i;

pt = &vars[0];//取得数组首地址
for(i=0;i<3;i++){
    ptr[i] = &vars[i];//数组存储地址整数
}
for(i=0;i<3;i++){
    printf("数组指针 var[%d]=%d\n",i,*ptr[i]);
}
for(i=0;i<3;i++){
    printf("算术 var[%d]=%d\n",i,*(pt++));
}

//字符串list
char *name[] = {
    "Zara","Hina","Nuha","Sara"
};
int k = 0;
for(k=0;k<3;k++){
    printf("字符串指针 name[%d]=%s\n",k,name[k]);
}

//指针的指针
int arr;
int *p;
int **pp;
arr = 3000;
p = &arr;
pp = &p;
printf("\n");
printf("指针的指针:\n");
printf("value of arr = %d\n",arr);
printf("value at *p = %d\n",*p);
printf("value at **pp = %d\n",**pp);


//传递指针函数
printf("\n");
printf("传递指针函数:\n");
unsigned long sec;
getSeconds(&sec);
printf("number of seconds: %d\n",sec);
printf("能接受指针作为参数的函数，同样可以接受数组作为参数；数组本身就是地址连续的多个单元，而指针本身就是代表一个单元\n");
printf("当传入数组时实际就是传入首地址！！！\n");

//定义指针返回函数
printf("\n");
printf("指针返回函数:\n");
int *q;
int j;
q = getRandom();
for(j=0;j<10;j++){
    printf("*(q + %d): %d\n",j,*(q+j));
}


}

//定义指针函数
void getSeconds(unsigned long *par){
    *par = time(NULL);
    return;
}

//定义指针返回函数
int *getRandom(){
    static int r[10];
    int i;
    //设置种子
    srand((unsigned) time(NULL));
    for ( i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf("r[%d] = %d\n",i,r[i]);
    }
    return r;
}