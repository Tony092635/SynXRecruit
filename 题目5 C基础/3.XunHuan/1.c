#include<stdio.h>
int main(){
    int a;
    long long result = 1;
    printf("请输入一个非负整数：");
    scanf("%d",&a);
    for(int i = 1;i <= a;i++){
        result = i*result;        
    }
    printf("%d的阶乘是%d",a,result);
    return 0;
}