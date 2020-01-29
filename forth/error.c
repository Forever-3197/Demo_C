#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>


extern int errno;

int main(){
    FILE *fp;
    int errnum;
    fp = fopen("unexist.txt","r");
    if (fp == NULL)
    {
        errnum = errno;
        fprintf(stderr,"Value of errno: %d\n",errno);
        perror("Error printed by perror");
        fprintf(stderr,"Error opening file: %s\n",strerror(errnum));
    }
    else
    {
        fclose(fp);
    }

//避免零除错误
printf("避免零除错误:\n");
    int dividend = 20;
    int divisor = 5;//除数！！不能为零
    int quotient;
    if( divisor == 0 ){
        fprintf(stderr,"Division by zero! Exiting...\n");
        exit(EXIT_FAILURE);//等价于exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"Value of quotient : %d\n",quotient);
    exit(EXIT_SUCCESS);//等价于exit(0);

    return 0;
}