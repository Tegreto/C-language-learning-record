#define   _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 10;//向内存申请了4个字节空间,a是变量，类型是int
//
//	&a;
//	printf("%p\n",&a);//地址是存在的
//	int* p = &a;//p是指针变量,类型是（*），int*也说明p指向的对象是int
//
//	printf("%p\n", p);
//
//	*p = 20;//解引用操作符
//	printf("%d\n",a);
//
//	return 0;
// }

//int main()
//{
//	double b = 3.14;
//	
//	double* p = &b;//32-4   64-8,地址
//
//	*p = 5.56;
//	printf("%lf\n",b);
//	printf("%lf\n", *p);
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//		printf("%d\n", sizeof(long*));
//		printf("%d\n", sizeof(double*));
//		printf("%d\n", sizeof(float*));
//
//	return 0;
//}

//结构体  struct
//创建结构体类型
//struct BOOK
//{
//	char nema[20];//起名，如C语言程序设计
//	short price;//价格
//
//};
//int main()
//{
//	//利用结构体类型创建一个该类型的变量
//	struct BOOK b1 = {"C语言程序设计",99};
//	struct BOOK* pb = &b1;
//	//利用pb打印书名和价格
//	//printf("书名是%s\n", (*pb).nema);//（*pb）先解引用操作，再找到成员
//	//printf("价格是%d\n", *pb.price);//不加括号（*pb）出现错误
//	//结构体变量.成员   
//	//结构体变量指针->成员
//	//printf("书名是%s\n",pb->nema);
//	/*printf("书名是%s\n", (* pb).nema);
//	printf("书名：%s\n", b1.nema);
//	printf("价格%d块钱\n",b1.price);
//	b1.price = 24;
//	printf("新价格：%d\n", b1.price);*/ 
//	return 0;
//}


//修改结构体字符串strcpy- string copy 字符串拷贝-库函数#include<srting.h>
//int main()
//{
//	struct BOOK b2 = {"一天学会C语言",88};
//	printf("书名是%s\n",b2.nema);
//	strcpy(b2.nema, "C++");
//	printf("书名是%s\n",b2.nema);
//
//
//	
//
//	return 0;
//}