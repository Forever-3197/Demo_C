#include<stdio.h>
#include<float.h>


int main(){
    /*第一个 C 程序*/
    printf("hello world!!!\n");
    printf("Storage size for int: %d\n",sizeof(int));
    printf("Storage size for float: %d\n",sizeof(float));
    printf("minimum float positive value: %E\n",FLT_MIN);
    printf("maximum float positive value: %E\n",FLT_MAX);
    printf("precision value: %d\n",FLT_DIG);
    printf("Type parameter: char int float double void \n")
    return 0;

}