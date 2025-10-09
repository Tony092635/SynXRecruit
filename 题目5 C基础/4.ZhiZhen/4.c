#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    printf("请输入第一个需要交换的数:a = ");
    scanf("%d",&a);
    printf("请输入第二个需要交换的数:b = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
}
void swap(int* a,int* b){
    int c = *a;
    *a = *b;
    *b = c;
}