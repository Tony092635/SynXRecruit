#include <stdio.h>   
int main(){
    char a = 'a';
    printf("%d",a);
    return 0;
}
// 由于char类型的变量存储的是字符的ASCII码，根据ASCII码表，a对应的数值为97，%d表示将a以十进制的形式输出，
// 所以打印的结果是97