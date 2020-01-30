#include<stdio.h>
#include<string.h>

int main(){
    char str1[12] = "hello";
    char str2[12] = "world";
    char str3[12];
    int len;

    strcpy(str3,str1);
    printf("【复制】字符串 strcpy(str3,str1): %s\n",str3);
    strcat(str1,str2);
    printf("【连接】字符串 strcat(str1,str2): %s\n",str1);
    len = strlen(str1);
    printf("字符串【长度】 strlen(str1): %d\n",len);
    printf("比对字符串 strcmp(str1，str2): ture\n");
    printf("【指针】指向字符ch第一次出现的位置 strchr(s1,ch)\n");
    printf("【指针】指向字符串str第一次出现的位置 strstr(s1,str)\n");

    printf("\n");
    printf("字符串数组定义：\n");
    printf("\tchar greeting[6] = {'h','e','l','l','o',''}\n");
    printf("同理：\n");
    printf("\tchar greeting[] = \"hello\"\n");
    printf("字符创实际上是以null字符作为【终止符号】的！！\n以上两种定义方法，字母只有【5】个但还有一个终止符，因此字符创数组大小为【6】\n");



}