#define   _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	
//	;//Ҳ��һ�����
//
//	return 0;
//}
//
//int  main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����");
//
//	return 0;
//}

//int  main()
//{
//	int age = 90;
//	if (age < 18)
//		printf("δ����");
//	else if (18 <= age && age < 28)
//		printf("����\n");
//	else if (28 <= age && age< 50)
//		printf("׳��\n");
//	else if (50 <= age && age< 90)
//		printf("����");
//	else
//		printf("�϶���");
//
//	return 0;
//}


//��������ʹ�ö�����䣬ʹ�ô����
//int  main()
//{
//	int age = 1;
//	if (age < 18)
//	{
//		printf("δ����");
//		printf("����̸����");
//	}
//	else
//	{
//	if (18 <= age && age < 28)
//	printf("����\n");
//	else if (28 <= age && age < 50)
//	printf("׳��\n");
//	else if (50 <= age && age < 90)
//	printf("����");
//	else
//	printf("�϶���");
//	}
//
//	return 0;
//}

//���� else
//else����������δƥ���ifƥ��
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (num == 5)//if (num = 5)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4; 
//	if (5 == num)//�Ƚ��಻��ȣ��ѳ�������߿�
//	{
//		printf("hehe");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	while (i<=100)
//	{
//		
//		
//		if (i%2== 1)
//		{
//			printf("%d\n", i);
//		}
//		else
//			printf("���ǻ���\n");
//
//		++i;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		printf("%d\n", i);
//		i += 2;
//
//	}
//	return 0;
//}

//����
//int main()
//{
//	int day = 0;
//	scanf("%d", & day);
//	if (1 == day)
//	{
//		printf("��%d\n",day );
//	}
//	else if(2==day)
//	{
//		printf("��%d\n", day);
//	}
//
//	return 0;
//}

//swicth,���֧
//switch�����ͱ��ʽ��
//case ���ͳ������ʽ

//int main()
//
//{
//	int day = 0;
//
//	int n = 1;
//	scanf("%d",&day);
//
//	switch (day)
//	{
//	case n://�����ǳ���
//		printf("��1\n");
//		break;
//	case 2:
//		printf("��2\n");
//		break;
//
//	case 3:
//		printf("��3\n");
//		break;
//
//	case 4:
//		printf("��4\n");
//		break;
//
//	case 5:
//		printf("��5\n");
//		break;
//
//
//	}
//	return 0;
//}

//int main()
//
//{
//	int day = 0;
//
//	int n = 1;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1://�����ǳ���
//		if (n == 1)
//			printf("hehe");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default :
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//��ϰ�� 
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		n++;
//	case 2:
//		m++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��
//
//		case 1:
//			n++;
//		case 2:
//			n++, m++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//
//	printf("n=%d,m=%d\n", n, m);
//
//	return 0;
//}

//ѭ��

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//
//		if (i == 5)
//		{
//			break;//��ֹ����ѭ������β
//		}
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		i++;
//		if (i == 5)
//		{
//
//			continue;//��ֹ���Σ�ѭ���к���Ĵ��룬���س��ڿ�ʼ��һ��ѭ��
//		}
//		printf("%d\n", i);
//		//i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl + z
	//EOF -end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}