#define   _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 0 };//�Ǹ�����Ԫ�ص�����
	//10*sizeof(int ) = 40
	printf("%d\n", sizeof(arr));
	//��������Ԫ�ظ���
	//����=�����ܴ�С����ÿ��Ԫ�ش�С
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);


	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	////sizeof������Ǳ�����������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(int));//�����������ǵȼ۵�
	//printf("%d\n", sizeof a);//������
	////printf ("%d\n",sizeof int)��//��������
	return 0;
}





//��Ŀ������
//˫Ŀ������
//��Ŀ������

//int main()
//{
//	//int a = 10;
//	//int b = 12;
//	//a + b;//+˫Ŀ������������������
//	//C�����б�ʾ���
//	//0-��ʾ�٣�
//	//��0-��
//	//�߼���������
//	//int a = 0;
//	int a = -2;
//	int b = -a��
//	int c = +3;//ͨ��������ʡ��
//	printf("%d\n", a);
//	printf("%d\n",!a );
//
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	a = 10;//=��ֵ   == �ж��Ƿ����
//	a = a + 10;
//	a += 10;//��
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	a ^= 2;
//	//���ϸ�ֵ����&+ &= ....
//
//
//
//	return 0;
//}

//int main()
//{
//	//��2���ƣ�λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���,��Ӧ�Ķ�����λ��ͬ��Ϊ��������Ϊһ
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
//	//��λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�32��bitλ
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
//	int a = 5 %2;//ȡģ��ȡ����
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;//����һ�����10���������ֵ�����
//	//�ڴ��п�����һ���ռ䣬����1-10�����ֽ�arr����Щ������ݻ����±꣬��0��ʼ
//	//printf("%d\n", arr[4]);//��ȡ����Ϊ 5.���±�ķ�ʽ���Է���Ԫ��
//	//���������±�
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



////����
//int Add(int x, int y)//int---�����ķ�������  Add �������ƣ��������Ĳ���
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

//����
//�Զ��庯��--�Լ��������㷨��
//�⺯��

//��ʶC����
//int main()
//{
//	int line = 0;
//	printf("����ѧϰ\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���%d\n",line);
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
//	printf("����bit\n");
//	printf("��Ҫ�ú�ѧϰô��<1/0>:");
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
//	//\32-32������8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	// 32-->��ΪASCII��ֵ������ַ�
//	//\ddd--->ddd��ʾ1-3���˽�������
//	//\xdd--->dd��ʾ2��ʮ�����Ƶ�����
//	 
//	return 0;
//}
 
//int main()
//{
//	printf("%c\n", '\'');//�����������ַ���
//
//	printf("%s\n", "\"");
//	//\����ת�������ַ�
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
//	//\t-ˮƽ	�Ʊ��
//	//   \\��ֹ��Ϊת���ַ�
//
//	return 0;
//}
//int main()
//{
//	printf("abc\n");// \n���У�Ҳ��ת���ַ�
//
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "ABC";
//	char arr2[] = { 'a','b', 'c',0 };
//
//	printf("%d\n", strlen(arr1));//strlen--string--lenght-�����ַ�������
//	printf("%d\n", strlen(arr2));
//
//	//--/0Ϊת���ַ�
//	//ת��ԭ�����ַ�
//
//
//	return 0;
//}


//
//int main()
//{
//	//�����ڼ�����ϴ����ʱ�򣬴������2����
//	//
//	//a--97
//	// A--65
//	// 
//	// ASCII��
//	//
//
//	char arr1[] = "abc";//����
//	//"abc"--'a''b''c'��\0��----'\0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c','\0'};//
//	//�ַ����ǽ�����־,Ĭ��
//	printf("%s\n", arr1);//���abc
//	printf("%s\n", arr2);//
//
//	return 0;
//}





//
////�ַ�������
//	"hello"
//	""//���ַ���



//ö�ٳ���
//ö��-һһ�о�
//�Ա����ڡ���ɫ
//ö�ٹؼ���--enum


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
//	colour = red ; //�������Ը�
//	//blue = 4;//ö�ٳ������ܸ�
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
////MELE FEMALE SECRET - ö�ٳ���
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


//define ����ı�ʶ������
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
//{	//congst--������
//	//const int n = 10;//n �Ǳ��������г����ԣ�ʹ������˵n�ǳ�����
//	//int arr[n] = {0};
//	//n = 20;
//	//const int num = 4;//const���εĳ�����,const������
//	//printf("%d\n", num);
//	//int num1 = 8;//����
//	//printf("%d\n", num1);
//
//	//���泣��
//	//3��
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