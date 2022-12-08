#define   _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	const int num = 4;
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//}

//enum COLOUR
//{
//	red,
//	yellow,
//	blue
//};
//
//int main()
//{
//	enum COLOUR colour = yellow;
//
//	printf(" % d\n", colour);
//	colour = blue; 
//	printf("%d\n", colour);
//	blue = 4;
//	printf("%d\n", colour);
//	return 0;
//}
//int main()
//#define MAX 10
//{
//
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//
//}

//main()
//{
//	char arr[] = "abc";//数组
//	//
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr);
//	printf("%s\n",arr2);
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "ABC";
//	char arr2[] = {'A','B','C'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//
//}

//int main()
//{
//	//printf("c:teddt\test\322\tss\n");
//	//printf("c:teddt\\test\\322\\tes\n");
//	printf("\142\n");
//	printf("\x23\n");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//
//	printf("要好好学习么？<1/0>\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("学习好");
//	    else
//		printf("学习不好");
//
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 2000)
//	{
//		printf("敲代码%d\n", line);
//		line++;
//
//	}
//	if (line >= 2000)
//		printf("成功");
//}

//int Add(int a, int b)
//{
//	int z = a + b;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("sum=%d", sum);
//
//	return 0;
// }

//main()
//{
//	int i = 0;
//	int arr[8] = { 1,2,3,4,5,6,7,8};
//	while (i < 8)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 7;
//	printf("%d\n", b % a);
//	printf("%d\n", b / a);
//}

//int main()
//{
//	int a = 2;//0000000000000010
//	int b = 0;//0000000000000000
//	b = a << 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("按位或=%d\n",a&b);
//	printf("按位与=%d\n", a | b);
//	printf("按位异或^=%d\n", a ^ b);
//
//	return 0;
//}


int main()
{
	int a = 10;
	a += 10;
	printf("%d\n", a);
	a += a;

	printf("%d\n", a);

	return 0;
}