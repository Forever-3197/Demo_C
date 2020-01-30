#include<stdio.h>

int main(int argc, char *argv[]){
    if (argc == 3)
    {
        printf("The process is \"%s\"\n",argv[0]);
        printf("The value of argc is【%d】\n",argc);
        printf("The argument supplied is %s %s\n",argv[1],argv[2]);
    }
    else if (argc > 3)
    {
        printf("The process is \"%s\"\n",argv[0]);
        printf("The value of argc is【%d】\n",argc);
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("The process is \"%s\"\n",argv[0]);
        printf("The value of argc is【%d】\n",argc);
        printf("One argument expected.\n");
    }
}