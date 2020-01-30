#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double getAverage(int arr[],int size);//函数调用数组
int *getRandom();//函数返回数组

int main(){
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
//函数调用数组
    printf("函数调用数组：\n");
    avg = getAverage( balance, 5);
    printf("平均值：%f\n",avg);

//函数返回数组
printf("函数返回数组：\n");
int *p;
int i;
p = getRandom();
for(i = 0; i < 10; i++){
    printf("*(p + %d) : %d\n",i,*(p+i));
}

//指向数组的指针
double *q;
double bal[5] = {1000, 2, 3, 17, 50};
q = bal;//相当于将段首地址赋值给p
printf("使用指针的数组值\n");
for ( i = 0; i < 5; i++)
{
    printf("*(q + %d) : %f\n",i,*(q+i));//*P表示p所表示的地址上存放的数值
}
printf("使用 bal 作为地址的数组值\n");
for ( i = 0; i < 5; i++)
{
    printf("*(bal + %d) : %f\n",i,*(bal+i));
}

    return 0;
}

double getAverage(int arr[],int size){
    int i;
    double avg;
    double sum;

    for ( i = 0; i < size; ++i)
    {
        sum += arr[i];/* code */
    }
    
    avg = sum / size;
    return avg;

}

int *getRandom(){
    static int r[10];
    int i;
    //设置种子
    srand((unsigned) time(NULL));
    for ( i = 0; i < 10; ++i)
    {
        r[i] = rand();
    //    printf("r[%d] = %d\n",i,r[i]);
    }
    return r;
}