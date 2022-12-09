#define   _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

//要求：在屏幕上输出一下一行信息
//This is a C program
//int main()
//{
//
//printf("This is a C program\n");
//
//return 0;
//}

 //求两个数中的较大的值,自定义函数
//int main()
//{
//
//	int max(int x, int y);
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d",&a,&b);
//	c = max(a, b);
//	printf("max=%d\n",c);
//
//	return 0;
//}
////第一种写法
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else(x < y);
//		return y;
//}

//第二种写法 
//int max(int x, int y)
//{
//	int z = 0;
//		if (x > y)
//			z = x;
//		else
//			z = y;
//	return z;
// }

//关于sizeof详解
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//六个元素，都是整型
//	printf("%d\n", sizeof (a));//可以把a两侧的（）去掉，说明sizeof是操作符，不是函数
//	printf("%d\n",sizeof (int) );//int 两侧（）不可以去掉
//	printf("%d\n", sizeof(arr));//计算数组大小,单位是字节
//	printf("%d\n", sizeof(arr)/sizeof(arr [0]));//
//
//	return 0;
//}

//操作符  ~ 按位取反，二进制位取反
//int main()
//{
//	int a = 0;//4个字节，32个bit位
//	int b = ~a;//是有符号的整型
//	//原码、反码、补码
//	//负数在内存中储存的是二进制的补码
//	printf("%d\n", b);//使用的，打印的是原码
//	//a = 0；00000000000000000000000000000000
//	// 按位取反11111111111111111111111111111111
//	// 补一位 11111111111111111111111111111110
//	// 除符号位取反100000000000000000000001
//	//b = -1；1000000000000000000000000000001
//return 0;
//}

//操作符 --  ++
//int main()
//{
//	int a = 10;
//		//int b = a++;//后置++，先使用a再++（自增）
//	int b = ++a;//前置++，先++（自增）在使用
//		printf("a= %d\nb = %d\n", a, b);
//
//	return  0;
//}

//(类型)  强制类型转换
//int main()
//{
//	int a = (int)3.14;//原先是doble类型
//
//
//	return 0;
//}

//关系操作符
//略

//逻辑操作符
  //&&逻辑与
  //||逻辑或
 //int main()
 //{
	//// 非0表示真
	////0表示假
	//int a = 0;
	//int b = 1;
	//int c = a && b;//区分&按位与
	//int d = a || b;//区分按位或
	//
	//printf("%d\n", d);
	//printf("%d\n", c);
   //return 0;
 //}

//三目操作符，条件操作符 exp1?exp:exp
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max ;
//
//	max=(a > b ? a : b);
//	//{if (a > b)
//	//	max = a;
//	////printf("%d", a);
//	//else(a < b);
//	//max = b;
//	////printf("%d",b);
//	//}
//	printf("%d", max);
//
//	return 0;
//		}


//逗号表达式
//略

//下标引用、函数调用和结构成员
//int Add(int x, int y)
//{
//	int z = 0;
//	int z = x+y;
//	return z;
//
//}
//int main()
//{
//	//int arr[10] = {0};
//	//arr[4];//[]下标引用操作符，用方框访问操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//函数后面的()叫做函数调用操作符
//	printf("%d\n", sum);
//
//	return 0;
//}

//只要是整数，存储的都是二进制的补码
//正数-原码-反码-补码 相同
//负数存的是补码，需要算出补码
//原码是直接按正负写出的二进制序列
//反码是原码按位取反，符号位不变
//补码是反码加一得到的

//常见关键字 
//局部变量前都有auto，但省略
//extern  引入外部变量
//int main()
//{
//	auto int a = 10;//局部变量//自动变量
//
//	return 0;
//}

////寄存器 register（推荐常用定义）
//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量
//
//	return 0;
//}

//int main()
//{
//	int a = -2;//省略了signed
//               //int 定义的变量是有符号的
//		       //signed int= int
//
//	    //也可以定义无符号数
//	unsigned int num = -1;////定义理解了，但是打印出来还是有符号数
//	printf("%d\n", num);
//
//
//	return 0;
//}

//struct 结构体关键字
//typedef 类型定义、类型重定义
//union 联合体、共用体
//viod  空
//关键词不能和定义的符号名相同

//typedef 类型定义、类型重定义,为了方便把长的名字改成短的方便的名字
//int main() {
//
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//
//	
//
//
//	return 0;
//}

//第一次没搞懂，重点复习，局部变量的生命周期
//void test()
//{
//	int a = 1;
//		a++;
//	printf("a = %d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//
//	while (i < 5)
//	{
//		test();
//		printf("i=%d\n", i);
//		i++;
//	}
//
//	return 0;
//}

//static把局部变量当作全局变量,修饰局部变量
//局部变量的生命周期变长了
//void test()
//{
//	static int a = 1;//a 是一个静态的局部变量
//		a++;
//	printf("a = %d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//static 限制全局变量，改变了作用域（缩小），出了源文件无法使用
//extern 声明外部符号，引用其他源文件全局变量
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static 修饰函数,改变了函数的链接属性
//正常函数具有外部链接属性，修饰后只具有内部链接属性
//使用外部函数，extern声明
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum =Add(a, b);
//	printf("sum = %d\n",sum );
//
//	return 0;
//}


//define 定义常量和宏
//#define 定义的标识符常量
//#define MAX 100
//int main() 
//{
//	int a = MAX;
//
//
//	return 0;
//
//}

//#define 可以定义宏—带参数
//函数的实现
//int Max(int x, int y)
//{
//	int z;
//
//	if (x > y)
//		z = x;
//	else(x < y);
//		z = y;
//	return z;
//}
////宏的方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	//int max = Max(a, b);
//	//宏的方式
//	int max = MAX(a, b);
//	//max=（max?a:b）
//
//	printf("max = %d\n",max);
//	return 0;
//}

//int main()
//{
//
//	int a = 10;//4个字节
//	int*  p = &a;//取地址a
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	*p = 20 ;//*  解引用操作符
//	printf("%d\n", a);
//	//有一种变量是用来存放地址的 - 指针变量
//	//printf("%p\n", &a);//0000006E3D7EF604  十六进制
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//
//	char* pc = &ch;
//	printf("%d\n",sizeof(ch));//char 本身是一个字节
//	printf("%d\n", sizeof(pc));//地址占了8个字节
//
//	*pc = 'a';
//	printf("%c",ch);
//
//
//	return 0;
//}

//指针变量大小取决于平台大小
//32位平台地址下载地址是32bit（4字节）
//64位平台地址下载地址是64bit（8字节）