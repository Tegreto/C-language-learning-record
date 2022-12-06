#define   _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//是个整形元素的数组
	//10*sizeof(int ) = 40
	printf("%d\n", sizeof(arr));
	//计算数组元素个数
	//个数=数组总大小除以每个元素大小
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);


	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	////sizeof计算的是变量、类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(int));//和上面的语句是等价的
	//printf("%d\n", sizeof a);//可以算
	////printf ("%d\n",sizeof int)；//不可以算
	return 0;
}





//单目操作符
//双目操作符
//三目操作符

//int main()
//{
//	//int a = 10;
//	//int b = 12;
//	//a + b;//+双目操作符，有俩操作数
//	//C语言中表示真假
//	//0-表示假，
//	//非0-真
//	//逻辑反操作符
//	//int a = 0;
//	int a = -2;
//	int b = -a；
//	int c = +3;//通常＋都会省略
//	printf("%d\n", a);
//	printf("%d\n",!a );
//
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	a = 10;//=赋值   == 判断是否相等
//	a = a + 10;
//	a += 10;//简化
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	a ^= 2;
//	//复合赋值符，&+ &= ....
//
//
//
//	return 0;
//}

//int main()
//{
//	//（2进制）位操作
//	//&按位与
//	//|按位或
//	//^按位异或,对应的二进制位相同则为零相异则为一
//	int a = 3;//011
//	int b = 5;//101
//		int c = a ^ b;
//	printf("%d\n",c);
//
//
//	return 0;
//}

//int main()
//{
//	//移位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节32个bit位
//	//00000000000000000000000000000001
//	int  b= a << 2;
//	printf("%d\n", b);
//	printf("%d", a);
//
//
//	return 0;
//}

//int main()
//{
//
//	int a = 5 %2;//取模，取余数
//
//	printf("%d", a);
//
//
//	return 0;
//}




//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;*/
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;//定义一个存放10个整型数字的数组
//	//内存中开辟了一个空间，放着1-10，名字叫arr，这些存放内容还有下标，从0开始
//	//printf("%d\n", arr[4]);//读取的数为 5.用下标的方式可以访问元素
//	//访问所有下标
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	//char ch[20];//
//	//float arr2[5];//
//
//
//	return 0;
//}



////函数
//int Add(int x, int y)//int---函数的返回类型  Add 函数名称（）函数的参数
//{
//	int z = x + y;
//
//	return z;
//
//}
//int main()
//
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//int a = 100;
//	//nt b = 200;
//	sum = num1 + num2;
//	
//	//sum = Add(a , b);
//	//sum = a + b;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum =%d\n",sum);
//	
//	return 0;
//}

//函数
//自定义函数--自己设置运算法则
//库函数

//初识C语言
//int main()
//{
//	int line = 0;
//	printf("加入学习\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码%d\n",line);
//
//		line++;
//
//
//	}
//	if(line>20000)
//
//	printf("good ofter\n");
//
//
//
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入bit\n");
//	printf("你要好好学习么？<1/0>:");
//	scanf("%d" ,& input);
//	if (input == 1)
//		printf("good offter\n");
//	else
//		printf("no\n");
//
//
//
//	return 0;
//}



//#include<string.h>
//int main()
//{
//	printf("%c\n", '\x61');
//
//
//	/*printf("%d\n", strlen("c:\test\132\test.c"));
//	printf("%c\n", '\132');*/
//	//\32-32是两个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	// 32-->作为ASCII码值代表的字符
//	//\ddd--->ddd表示1-3个八进制数字
//	//\xdd--->dd表示2个十六进制的数字
//	 
//	return 0;
//}
 
//int main()
//{
//	printf("%c\n", '\'');//单引号是引字符的
//
//	printf("%s\n", "\"");
//	//\用来转义其他字符
//	return 0;
//}


//int main()
//{
//	printf("(are you ok???)");
//
//
//	return 0;
//}





//int main()
//{
//	printf("c:\\test\\32\test.c");
//	//\t-水平	制表符
//	//   \\防止成为转义字符
//
//	return 0;
//}
//int main()
//{
//	printf("abc\n");// \n换行，也是转义字符
//
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "ABC";
//	char arr2[] = { 'a','b', 'c',0 };
//
//	printf("%d\n", strlen(arr1));//strlen--string--lenght-计算字符串长度
//	printf("%d\n", strlen(arr2));
//
//	//--/0为转义字符
//	//转变原来的字符
//
//
//	return 0;
//}


//
//int main()
//{
//	//数据在计算机上储存的时候，储存的是2进制
//	//
//	//a--97
//	// A--65
//	// 
//	// ASCII表
//	//
//
//	char arr1[] = "abc";//数组
//	//"abc"--'a''b''c'‘\0’----'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c','\0'};//
//	//字符串是结束标志,默认
//	printf("%s\n", arr1);//输出abc
//	printf("%s\n", arr2);//
//
//	return 0;
//}





//
////字符串类型
//	"hello"
//	""//空字符串



//枚举常量
//枚举-一一列举
//性别、日期、颜色
//枚举关键字--enum


//enum COLOUR
//{
//	red,
//	yellow,
//	blue
//};
//
//int main()
//{
//	enum COLOUR  colour = yellow;
//	colour = red ; //变量可以改
//	//blue = 4;//枚举常量不能改
//		printf("%d\n", colour);
//
//
//
//		return 0;
//}

//enum Sex
//{
//	MELE,
//	FEMALE,
//	SECRET
//
//};
////MELE FEMALE SECRET - 枚举常量
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MELE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//
//
//
//	return 0;
//}


//define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//
//
//
//	return 0;
//}


//int main()
//{	//congst--常属性
//	//const int n = 10;//n 是变量但是有常属性，使用我们说n是常变量
//	//int arr[n] = {0};
//	//n = 20;
//	//const int num = 4;//const修饰的常变量,const常属性
//	//printf("%d\n", num);
//	//int num1 = 8;//变量
//	//printf("%d\n", num1);
//
//	//字面常量
//	//3；
//
//
//
//
//	return 0;
//}



//int main()
//
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum =%d\n",sum);
//	 
//
//
//
//
//	return 0;
//}