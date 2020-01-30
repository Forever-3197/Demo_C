#include<stdio.h>
void main(){
    printf("定义数组：\n");
    printf("\ttype arrayName[size]\t例：double balance[10]\n");
    printf("初始化数组：\n");
    printf("\tdouble balance[10] = {1000.0,2.0，3.4,7.0,50.0}\n");
    printf("\tdouble balance[] = {1000.0,2.0，3.4,7.0,50.0} 省略size则数组大小就是初始化元素个数\n");
    printf("数组元素赋值：\n");
    printf("\tbalance[6] = 2.3 即对数组中的第5个元素重新赋值，数组索引从0开始！\n");
    int n[10];
    int i,j;
    for(i=0; i<10; i++){
        n[i] = i + 100;
    }
    for (j = 0; j < 10; j++)
    {
        printf("Element[%d] = %d\n",j,n[j]);
    }

    //多维数组
    printf("定义多维数组：\n");
    printf("\ttype arrayName[size1][size2]..\t例：三维数组double balance[5][10][4]\n");
    printf("初始二维数组：\n");
    printf("\tint a[2][2] = {\n");
    printf("\t\t{0,1},\n");
    printf("\t\t{2,3}\n");
    printf("\t}\n");
    printf("等价于下面的赋值方式：\n");
    printf("\tint a[2][2] = {0,1,2,3}\n");
    printf("元素赋值 a[1][1] = 6\n");
    printf("元素访问 result = a[1][1] \tresult=3，索引从0开始\n");
    
}