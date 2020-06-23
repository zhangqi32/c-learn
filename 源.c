#include <stdio.h>
#include <string.h>
//define一个形参为结构体变量指针的输出子函数
//变量的指针&p   指针代表的变量*p p是指针
struct student
{
	int number;
	char* name;
	float score[3];
};
void print(struct student *p);//在主函数后的子函数必须在之前有一个声明，因为函数编译是从前往后的
int main()
{
	struct student liming;
	liming.number = 10001;
	liming.name = "nihaoshuai";
	liming.score[0] = 98.0;
	liming.score[1] = 99.0;
	liming.score[2] = 100;
	 print(&liming );//&liming 结构体变量的地址
	return 0;
}
void print(struct student *p)//在主函数中的外部函数需要在

{
	printf("the number is:%d\n", p->number);
	printf("the name is:%s\n", p->name);
	printf("the score1 is :%5.2f\n", p->score[0]);
	printf("the score2 is :%5.2f\n", p->score[1]);
	printf("the score3 is :%5.2f\n", p->score[2]);
	printf("\n");
}
