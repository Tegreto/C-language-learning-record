#define   _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>





//int main()
//	{
//
//	//未声明的标识符
//	//声明extern外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//
//
//	return 0;
//	}

//int global = 2020;
//
//void test()
//{
//	printf("test()--%d\n", global);
//
//
//}
//
//
//int main()
//
//{
//
//	test();
//	printf("%d\n", global);
//
//
//
//	return  0;
//}
//
//


//int main()
//{
//	{
//		int num = 0;
//	}
//
//
//	printf("%d\n", num);
//	     
//
//	return 0;
//}





//int a = 100;
//int main()
//
//{
//
//	//int a = 10;
//
//
//		printf("%d\n", a);
//		//局部变量和全局变量的名字不易相同，容易误会产生bug
//		//当全局变量和局部变量的名字一致，局部变量优先
//	return 0;
//}
//



//int  num2 = 20;//全局变量定义在代码块（{}）之外
//int main()
//{
//
//	int num1 = 10;//局部变量，定义在代码块之内的（{}）
//
//	return 0;
//
//}
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4/8.规定sizeof(long)>=sizeof(int)
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8

	//
	//short  age = 20;//向系统申请两个字节=16个比特位
	//float weight = 95.6f; //向内存申请4个字节存放小数
	//return 0;
 //}
//字节
// 计算机中的单位
// 最小单位--bit（比特位）   存放2进制位
// byte-字节 1个字节等于8个比特位
// kb    -- 1024进制
// mb      ---1024
// gb    ---1024
// tb ----1024
// pb  ---1024 
//


//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}
//包含一个叫<stdio.h>的文件
//std- 标准 standard input output
//
//#include <stdio.h>
//int main()//主函数-程序的入口-有且只有一个
//{
//	//这里完成任务
//	//在频幕上输出hello world
//	//函数-printf-打印函数
//	//库函数-C语言本身提供的函数
//	//#include
//	printf("hello world\n");
//	return 0;
//
//
//}
//
////int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()
//{
//
//return 0;//返回0
//}
// 
// 
//这种是过时的写法
//void main()
//

//char
//int main()
//{
	//short int- 短整型
	//int-整型
	//%d- 打印整形
	// %c- 打印字符
	// %f- 打印浮点数字 - 打小数
	// %p - 以地址的形式打印
	// %x - 打印16进制数字
	//int age = 20;
	//printf("%d\n", age);//打印十进制数据
	//char ch='A';//内存
	//printf("%C\n", ch);//%c-对应打印字符格式的数据
	//long -长整型
	//long num = 100;
	//	printf("%d\n", num);
	/*float f = 5.0;
	printf("%f", f);*/
	//double d = 3.14;
	//printf("%lf \n", d);


	//return 0;
//}


//20
//55.5  