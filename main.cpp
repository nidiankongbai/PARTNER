#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Question
{
	char name[40];
	char ans[10];
};

void CreatQuestions(int number, int range); //������Ŀ
void JudgeNumber(string s);  //�ж�������Ƿ���Ҫ����
void JudgeRepeat();    //�ж���Ŀ�Ƿ��ظ�
void CalAnswer(string s);  //�����
void WriteFile(string s, FILE* file, int tag)��  //��Ŀ���𰸷����ļ�
void Sequence(string s);  //����˳��

int main()
{
	int number;
	printf("��������Ŀ����\n");
	scanf("%d", &number);

	int range;
	printf("��������ֵ��Χ\n");
	scanf("%d", &range);

	CreatQuestions(number, range);



	return 0;
}

//������Ŀ
void CreatQuestions(int number, int range)
{
	Question question[10000];
}

//�ж�������Ƿ���Ҫ����
void JudgeNumber(string s)
{

}

//�ж���Ŀ�Ƿ��ظ�
void JudgeRepeat()
{

}

//�����
void CalAnswer(string s)
{

}

//��Ŀ���𰸷����ļ�
void WriteFile(string s, FILE* file, int tag)
{

}

//����˳��
void Sequence(string s)
{

}