#define   _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	
//	;//也是一条语句
//
//	return 0;
//}
//
//int  main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年");
//
//	return 0;
//}

//int  main()
//{
//	int age = 90;
//	if (age < 18)
//		printf("未成年");
//	else if (18 <= age && age < 28)
//		printf("青年\n");
//	else if (28 <= age && age< 50)
//		printf("壮年\n");
//	else if (50 <= age && age< 90)
//		printf("老年");
//	else
//		printf("老东西");
//
//	return 0;
//}


//条件成立使用多条语句，使用代码块
//int  main()
//{
//	int age = 1;
//	if (age < 18)
//	{
//		printf("未成年");
//		printf("不能谈恋爱");
//	}
//	else
//	{
//	if (18 <= age && age < 28)
//	printf("青年\n");
//	else if (28 <= age && age < 50)
//	printf("壮年\n");
//	else if (50 <= age && age < 90)
//	printf("老年");
//	else
//	printf("老东西");
//	}
//
//	return 0;
//}

//悬空 else
//else和离得最近的未匹配的if匹配
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
//	if (5 == num)//比较相不相等，把常量放左边看
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
//			printf("不是基数\n");
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

//繁琐
//int main()
//{
//	int day = 0;
//	scanf("%d", & day);
//	if (1 == day)
//	{
//		printf("周%d\n",day );
//	}
//	else if(2==day)
//	{
//		printf("周%d\n", day);
//	}
//
//	return 0;
//}

//swicth,多分支
//switch（整型表达式）
//case 整型常量表达式

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
//	case n://必须是常量
//		printf("周1\n");
//		break;
//	case 2:
//		printf("周2\n");
//		break;
//
//	case 3:
//		printf("周3\n");
//		break;
//
//	case 4:
//		printf("周4\n");
//		break;
//
//	case 5:
//		printf("周5\n");
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
//	case 1://必须是常量
//		if (n == 1)
//			printf("hehe");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default :
//		printf("输入错判\n");
//		break;
//	}
//	return 0;
//}

//练习题 
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
//		{//switch允许嵌套
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

//循环

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//
//		if (i == 5)
//		{
//			break;//终止跳出循环到结尾
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
//			continue;//终止本次，循环中后面的代码，返回出口开始下一次循环
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