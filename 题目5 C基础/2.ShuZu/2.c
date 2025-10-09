#include<stdio.h>
int main(){
    int stu;
    printf("请输入学生数量:");
    scanf("%d",&stu);    
    printf("请输入%d个学生的成绩\n",stu);
    int grade[stu];
    int sum = 0;
    double ave;
    for(int i = 0;i < stu;i++){
        printf("请输入第%d个学生的成绩:",(i+1));
        scanf("%d",&grade[i]);
        sum += grade[i];
    }
    ave = sum/(double)stu;
    printf("%d名学生的平均分为%.2f",stu,ave);
    return 0;
}