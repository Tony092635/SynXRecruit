#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int plyr = 0, cpt = 0;
    int plyr_wins = 0, cpt_wins = 0;
    int round = 1;
    
    srand((unsigned int)time(NULL));
    printf("剪刀石头布游戏 - 三局两胜制\n");
    
    while (plyr_wins < 2 && cpt_wins < 2) {
        printf("\n第%d局 - 比分: 你 %d : %d 电脑\n", round, plyr_wins, cpt_wins);
        printf("请输入你的选择:0(剪刀) 1(石头) 2(布)\n");
        scanf("%d",&plyr);
        
        cpt = rand() % 3;
        
        if (cpt == 0) {
            printf("我出剪刀");
        } else if (cpt == 1) {
            printf("我出石头");
        } else {
            printf("我出布");
        }
        printf("\n");
        
        if((plyr == 1&&cpt == 0)||(plyr == 2&&cpt == 1)||(plyr == 0&&cpt == 2)){
            printf("你赢了本局\n");
            plyr_wins++;
        } else if (plyr == cpt) {
            printf("平局，本局重赛\n");
            round--;
        } else {
            printf("你输了本局\n");
            cpt_wins++;
        }
        
        round++;
    }
    
    printf("\n游戏结束 - 最终比分: 你 %d : %d 电脑\n", plyr_wins, cpt_wins);
    if (plyr_wins > cpt_wins) {
        printf("恭喜你获得最终胜利！\n");
    } else {
        printf("电脑获得最终胜利！\n");
    }
    
    return 0;
}