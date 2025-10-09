#include<stdio.h>
int main(){
    printf("请输入五个学生的成绩\n");
    int grade[5];
    int sum = 0;
    double ave;
    for(int i = 0;i < 5;i++){
        printf("请输入第%d个学生的成绩:",(i+1));
        scanf("%d",&grade[i]);
        sum += grade[i];
    }
    ave = sum/5.00;
    printf("5名学生的平均分为%.2f",ave);
    return 0;
}