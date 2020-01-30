#include<stdio.h>
#include<string.h>

typedef struct Books{
    char title[50];
    char author[50];
    char subjects[100];
    int book_id;
} Book;

#define True 1
#define False 0

//Book 成为 struct Books 的缩写形式

int main(){

    struct Books book;
//等价的定义方式
    //Book book;
    strcpy(book.title,"C Programming");
    strcpy(book.author,"Nuha Ali");
    strcpy(book.subjects,"C Programming Tutorial");
    book.book_id = 6545921;

    printf("Book.title : %s \n",book.title);
    printf("book.author : %s \n",book.author);
    printf("book.subjects : %s \n",book.subjects);
    printf("book.book_id : %d \n",book.book_id);

    printf("\n");
    printf("True is : %d\n",True);


}