#include <stdio.h>
#include <string.h>
//defineһ���β�Ϊ�ṹ�����ָ�������Ӻ���
//������ָ��&p   ָ�����ı���*p p��ָ��
struct student
{
	int number;
	char* name;
	float score[3];
};
void print(struct student *p);//������������Ӻ���������֮ǰ��һ����������Ϊ���������Ǵ�ǰ�����
int main()
{
	struct student liming;
	liming.number = 10001;
	liming.name = "nihaoshuai";
	liming.score[0] = 98.0;
	liming.score[1] = 99.0;
	liming.score[2] = 100;
	 print(&liming );//&liming �ṹ������ĵ�ַ
	return 0;
}
void print(struct student *p)//���������е��ⲿ������Ҫ��

{
	printf("the number is:%d\n", p->number);
	printf("the name is:%s\n", p->name);
	printf("the score1 is :%5.2f\n", p->score[0]);
	printf("the score2 is :%5.2f\n", p->score[1]);
	printf("the score3 is :%5.2f\n", p->score[2]);
	printf("\n");
}
