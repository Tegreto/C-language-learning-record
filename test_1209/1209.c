#define   _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

//Ҫ������Ļ�����һ��һ����Ϣ
//This is a C program
//int main()
//{
//
//printf("This is a C program\n");
//
//return 0;
//}

 //���������еĽϴ��ֵ,�Զ��庯��
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
////��һ��д��
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else(x < y);
//		return y;
//}

//�ڶ���д�� 
//int max(int x, int y)
//{
//	int z = 0;
//		if (x > y)
//			z = x;
//		else
//			z = y;
//	return z;
// }

//����sizeof���
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//����Ԫ�أ���������
//	printf("%d\n", sizeof (a));//���԰�a����ģ���ȥ����˵��sizeof�ǲ����������Ǻ���
//	printf("%d\n",sizeof (int) );//int ���ࣨ��������ȥ��
//	printf("%d\n", sizeof(arr));//���������С,��λ���ֽ�
//	printf("%d\n", sizeof(arr)/sizeof(arr [0]));//
//
//	return 0;
//}

//������  ~ ��λȡ����������λȡ��
//int main()
//{
//	int a = 0;//4���ֽڣ�32��bitλ
//	int b = ~a;//���з��ŵ�����
//	//ԭ�롢���롢����
//	//�������ڴ��д�����Ƕ����ƵĲ���
//	printf("%d\n", b);//ʹ�õģ���ӡ����ԭ��
//	//a = 0��00000000000000000000000000000000
//	// ��λȡ��11111111111111111111111111111111
//	// ��һλ 11111111111111111111111111111110
//	// ������λȡ��100000000000000000000001
//	//b = -1��1000000000000000000000000000001
//return 0;
//}

//������ --  ++
//int main()
//{
//	int a = 10;
//		//int b = a++;//����++����ʹ��a��++��������
//	int b = ++a;//ǰ��++����++����������ʹ��
//		printf("a= %d\nb = %d\n", a, b);
//
//	return  0;
//}

//(����)  ǿ������ת��
//int main()
//{
//	int a = (int)3.14;//ԭ����doble����
//
//
//	return 0;
//}

//��ϵ������
//��

//�߼�������
  //&&�߼���
  //||�߼���
 //int main()
 //{
	//// ��0��ʾ��
	////0��ʾ��
	//int a = 0;
	//int b = 1;
	//int c = a && b;//����&��λ��
	//int d = a || b;//���ְ�λ��
	//
	//printf("%d\n", d);
	//printf("%d\n", c);
   //return 0;
 //}

//��Ŀ������������������ exp1?exp:exp
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


//���ű��ʽ
//��

//�±����á��������úͽṹ��Ա
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
//	//arr[4];//[]�±����ò��������÷�����ʲ�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//���������()�����������ò�����
//	printf("%d\n", sum);
//
//	return 0;
//}

//ֻҪ���������洢�Ķ��Ƕ����ƵĲ���
//����-ԭ��-����-���� ��ͬ
//��������ǲ��룬��Ҫ�������
//ԭ����ֱ�Ӱ�����д���Ķ���������
//������ԭ�밴λȡ��������λ����
//�����Ƿ����һ�õ���

//�����ؼ��� 
//�ֲ�����ǰ����auto����ʡ��
//extern  �����ⲿ����
//int main()
//{
//	auto int a = 10;//�ֲ�����//�Զ�����
//
//	return 0;
//}

////�Ĵ��� register���Ƽ����ö��壩
//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//
//	return 0;
//}

//int main()
//{
//	int a = -2;//ʡ����signed
//               //int ����ı������з��ŵ�
//		       //signed int= int
//
//	    //Ҳ���Զ����޷�����
//	unsigned int num = -1;////��������ˣ����Ǵ�ӡ���������з�����
//	printf("%d\n", num);
//
//
//	return 0;
//}

//struct �ṹ��ؼ���
//typedef ���Ͷ��塢�����ض���
//union �����塢������
//viod  ��
//�ؼ��ʲ��ܺͶ���ķ�������ͬ

//typedef ���Ͷ��塢�����ض���,Ϊ�˷���ѳ������ָĳɶ̵ķ��������
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

//��һ��û�㶮���ص㸴ϰ���ֲ���������������
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

//static�Ѿֲ���������ȫ�ֱ���,���ξֲ�����
//�ֲ��������������ڱ䳤��
//void test()
//{
//	static int a = 1;//a ��һ����̬�ľֲ�����
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

//static ����ȫ�ֱ������ı�����������С��������Դ�ļ��޷�ʹ��
//extern �����ⲿ���ţ���������Դ�ļ�ȫ�ֱ���
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static ���κ���,�ı��˺�������������
//�������������ⲿ�������ԣ����κ�ֻ�����ڲ���������
//ʹ���ⲿ������extern����
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


//define ���峣���ͺ�
//#define ����ı�ʶ������
//#define MAX 100
//int main() 
//{
//	int a = MAX;
//
//
//	return 0;
//
//}

//#define ���Զ���ꡪ������
//������ʵ��
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
////��ķ�ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	//int max = Max(a, b);
//	//��ķ�ʽ
//	int max = MAX(a, b);
//	//max=��max?a:b��
//
//	printf("max = %d\n",max);
//	return 0;
//}

//int main()
//{
//
//	int a = 10;//4���ֽ�
//	int*  p = &a;//ȡ��ַa
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	*p = 20 ;//*  �����ò�����
//	printf("%d\n", a);
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	//printf("%p\n", &a);//0000006E3D7EF604  ʮ������
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//
//	char* pc = &ch;
//	printf("%d\n",sizeof(ch));//char ������һ���ֽ�
//	printf("%d\n", sizeof(pc));//��ַռ��8���ֽ�
//
//	*pc = 'a';
//	printf("%c",ch);
//
//
//	return 0;
//}

//ָ�������Сȡ����ƽ̨��С
//32λƽ̨��ַ���ص�ַ��32bit��4�ֽڣ�
//64λƽ̨��ַ���ص�ַ��64bit��8�ֽڣ�