#include<stdio.h>
int main(){
    int n,c,i = 1,a = 0,b = 1;
    printf("请输入打印项数：");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i == 1){
            printf("%d ",a);
        }
        else if (i == 2){
            printf("%d ",b);
        }
        else{
            c = a + b;
            printf("%d ",c);
            a = b;
            b = c;
        }
        i++;
    }
    return 0;
}
