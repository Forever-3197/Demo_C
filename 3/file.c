#include<stdio.h>

int main(){
    FILE *fp;
    char buff[50];

    fp = fopen("./test.txt","w+");
    fprintf(fp,"this is testing for fprintf...\n");
    fputs("this is testing for fprintf...\n",fp);
    fclose(fp);

    fp = fopen("./test.txt","r");
    fscanf(fp,"%s",buff);//扫描到第一个space 终止
    printf("1. %s\n",buff);

    fgets(buff,255,(FILE *)fp);//在fscanf的基础上继续读取剩余部分，直到行尾部
    printf("2. %s\n",buff);

    fgets(buff,255,(FILE *)fp);//读取完整的一行，在遇到回车换行符号时 终止
    printf("3. %s\n",buff);
    fclose(fp);

}