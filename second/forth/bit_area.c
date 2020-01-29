#include<stdio.h>
#include<string.h>

struct 
{
    unsigned int age : 3;
}Age;

int main(){
    Age.age = 4;
    printf("Sizeof(Age): %d \n",sizeof(Age));
    printf("Age.age : %d\n",Age.age);

    Age.age = 7;
    printf("Age.age : %d\n",Age.age);

    Age.age = 8;
    printf("Age.age : %d\n",Age.age);
     printf("age只能用3位来存储数值，最大值7，超出就无法存储！！！、\n\n");
    return 0;
}
