#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name[100];
    char *description;
    strcpy(name,"Zara Ali");

//进行动态内存分配
    //description = calloc(200 * sizeof(char));
    description = malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr,"Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description,"Zara ali a dps student.\t");
    }

//假设你想存储更大的面描述信息，可以进行内存的重新分配
    description = realloc(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr,"Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(description,"she is in class 10th.");//如果没有重新分配内存，这一步会由于空间不够而发生错误
    }
    printf("name = %s\n",name);
    printf("Description: %s\n",description);

    free(description);
}