#include<stdio.h>
#include<string.h>

//定义结构体
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int  book_id;
};

void printBook(struct Books Book1);
void mesg_Book(struct Books *book);

int main(){
    printf("结构体定义：\n");
    printf("struct structure_tag{\n");
    printf("\t\ttype name1\n");
    printf("\t\t... ...\n");
    printf("\t\ttype name\n");
    printf("\t}\n");
    printf("\n");
    printf("实例：\n");
    printf("struct Books{\n");
    printf("\t\tchar\ttitle[50]\n");
    printf("\t\tchar\tauthor\n");
    printf("\t\tint \tbood_id\n");
    printf("\t}\n");
    
     printf("\n");
    struct Books Book1;
    struct Books Book2;

//描述Book1
    strcpy(Book1.title,"C Programming");
    strcpy(Book1.author,"Nuha Ali");
    strcpy(Book1.subject,"C Programming Tutorial");
    Book1.book_id = 6495700;

//描述Book2
    strcpy(Book2.title,"Telecom Billing");
    strcpy(Book2.author,"Zara Ali");
    strcpy(Book2.subject,"Telecom Billing Tutorial");
    Book2.book_id = 6495407;

//输出数据
printf("title : %s\tauthor : %s\tsubject : %s\tbook_id : %d\n",Book1.title,Book1.author,Book1.subject,Book1.book_id);

//结构体函数
printf("\n");
printf("【结构体函数】输出：\n");
printBook(Book2);  

//结构体函数指针输出 
printf("\n");
printf("【结构体指针】输出：\n");
mesg_Book(&Book1);
}

//结构体作为函数参数输入
void printBook(struct Books Book1){
    printf("title : %s\nauthor : %s\nsubject : %s\nbook_id : %d\n",Book1.title,Book1.author,Book1.subject,Book1.book_id);
}

//结构体指针函数
void mesg_Book(struct Books *book){
    printf("title : %s\nauthor : %s\nsubject : %s\nbook_id : %d\n",book->title,book->author,book->subject,book->book_id);
}