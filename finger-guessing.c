#include<stdio.h>
#include <stdlib.h>

int main(){
    int plyr = 0,cpt = 0;
    printf("剪刀石头布游戏\n请输入你的选择:0(剪刀) 1(石头) 2(布)\n");
    scanf("%d",&plyr);
    cpt = rand() % 3;
    if (cpt == 0){
        printf("我出剪刀");
    }
    else if (cpt == 1){
        printf("我出石头");
    }
    else{
        printf("我出布\n");
    }
    if((plyr == 1&&cpt == 0)||(plyr == 2&&cpt == 1)||(plyr == 0&&cpt == 2)){
        printf("你赢了");
    }
    else if (plyr == cpt)
    {
        printf("平局");
    }
    
    else{
        printf("你输了");
    }
    return 0;
}