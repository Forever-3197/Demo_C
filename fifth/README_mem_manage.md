# 动态　内存管理
意义：如果预先不知道需要存储的文本长度，动态内存管理可以在运行的过程中改变存储空间大小，而不会像数组一样确定后就不能改变大小。
关键字：`#include<stdlib.h>`
>分配管理函数：
  - void *calloc(int num,int size);
    - 函数分配一个带有function allocates an array of num个元素的数组，每个元素大小为size字节。
  - void free(void *address);
    - 函数释放address所指向的内存块。
  - void *malloc(int num);
    - 分配一个num字节的数组，并且把他们进行初始化。
  - void *realloc(void *address, int newsize);
    - 重新分配内存，把内存扩展到newsize大小。

>特点：动态内存分配时，有完全控制权，可传递任何大小的值，而预先定义好的数组，一旦定义无法该表达大小。动态内存分配具有更高的灵活性。

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name[100];
    char *description;
    strcpy(name,"Zara Ali");

//进行动态内存分配
    //description = calloc(200 * sizeof(char));
    description = malloc(200 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr,"Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description,"Zara ali a dps student in class 10th");
    }
    printf("name = %s\n",name);
    printf("Description: %s\n",description);
}
```