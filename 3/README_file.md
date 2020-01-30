## 文件打开操作
关键字：**fopen()**

>用法：`FILE *fopen(const char * filename, const char * mode)`

文本文件 mode: `r w a r+ w+ a+`


Mode | describe
---------|----------
 r | 读取方式打开已有文本文件 
 w | 写方式打开文本文件，文件不存在则会创建新文件，从头开始写入 
 a | 打开文件，追加方式写入文件，文件不存在则自动创建新文件，在已有的文件内容中追加内容 
 r+ | 打开文件，允许读写 
 w+ | 打开文件，允许读写，文件不存在则创建，文件存在则被截断为零长度 
 a+ | 打开文件，允许读写，文件不存在则创建，文件存在读取会从头开始，写入只能以追加方式 

二进制文件 mode: `rb wb ab r+b w+b a+b wb+ ab+`

## 文件关闭操作
关键字：**fclose()**

## 文件写入操作
关键字：**fputc()**

关键字：**fputs()**

>用法：`int fputc(int c,FILE *fp)`;

以上函数会把参数c的字符值写入到fp所指向的输出流中，写入成功返回写入的字符，写入失败返回`EOF`

>用法：`int fputs(const char *s,FILE *fp)`;

以上函数会把字符串s写入到fp所指向的输出流中，写入成功返回非负值，写入失败返回`EOF`

>`int fprintf(FILE *fp, const char *format,...)`

这个函数可以替代上面的函数

## 文件读取操作
关键字：**fgetc()**

关键字：**fgets()**

>用法：`int fgetc(FILE *fp);`

以上函数从fp所指向的输入文件中读取一个字符，返回值是读取的字符，读取错误返回 `EOF`

>用法：`int *fgets(char *buf,int n,FILE *fp);`

以上函数从fp所指向的输入文件中读取 `n-1` 个字符，d读取到的字符串将被复制到`buf`中，并且追加null终止字符，如果函数在读取最后一个字符之前遇到换行符号‘\n’或文件的末尾EOF，则只会返回读取到的字符，包括换行符；读取错误返回 `EOF`

>`int fscanf(FILE *fp, const char *format,...)`

这个函数可以替代上面的函数,读文件进行读取，但在遇到第一个space符号时停止读取。

## 二进制 I/O 函数
关键字：
>`size_t fread(void *ptr,size_t size_of_elements,size_t number_of_elements,FILE *a_file)`

>`size_t fwrite(void *ptr,size_t size_of_elements,size_t number_of_elements,FILE *a_file)`

这两个函数用于存储块的读写-通常是数组和结构体。
