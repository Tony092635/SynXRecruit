#include<stdio.h>
int main(){
    int stu;
    int num[101]={0};
    int sum = 0;
    double ave;
    printf("请输入学生数量:");
    scanf("%d",&stu);    
    printf("请输入%d个学生的成绩(0~100)\n",stu);
    int grade[stu];
    for(int i = 0;i < stu;i++){
        printf("请输入第%d个学生的成绩:",(i+1));
        scanf("%d",&grade[i]);
        sum += grade[i];
        num[grade[i]]++;
    }
    ave = sum/(double)stu;
    printf("%d名学生的平均分为%.2f\n",stu,ave);
    printf("分数分布统计：\n   分数  ||  人数\n ================\n");
    for(int t = 0;t<101;t++){
        if(num[t] > 0 ){
            printf("      %d  ||  %d\n",t,num[t]);
        }
    } 
    return 0;
}