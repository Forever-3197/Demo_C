#include<stdio.h>

int main(){
    int sum = 17, count = 5;
    double mean;
    //强制转换的优先级高于除法运算，因此sum会优先被转换成double型
    mean = (double) sum / count;
    printf("Value of mean : %f\n",mean);

    int i = 17;
    char c = 'c';//ascii 99
    float jsum;
    jsum = i + c;
    printf("Value of jsum : %f\n",jsum);
}