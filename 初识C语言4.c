#define   _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 10;//���ڴ�������4���ֽڿռ�,a�Ǳ�����������int
//
//	&a;
//	printf("%p\n",&a);//��ַ�Ǵ��ڵ�
//	int* p = &a;//p��ָ�����,�����ǣ�*����int*Ҳ˵��pָ��Ķ�����int
//
//	printf("%p\n", p);
//
//	*p = 20;//�����ò�����
//	printf("%d\n",a);
//
//	return 0;
// }

//int main()
//{
//	double b = 3.14;
//	
//	double* p = &b;//32-4   64-8,��ַ
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

//�ṹ��  struct
//�����ṹ������
//struct BOOK
//{
//	char nema[20];//��������C���Գ������
//	short price;//�۸�
//
//};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵ı���
//	struct BOOK b1 = {"C���Գ������",99};
//	struct BOOK* pb = &b1;
//	//����pb��ӡ�����ͼ۸�
//	//printf("������%s\n", (*pb).nema);//��*pb���Ƚ����ò��������ҵ���Ա
//	//printf("�۸���%d\n", *pb.price);//�������ţ�*pb�����ִ���
//	//�ṹ�����.��Ա   
//	//�ṹ�����ָ��->��Ա
//	//printf("������%s\n",pb->nema);
//	/*printf("������%s\n", (* pb).nema);
//	printf("������%s\n", b1.nema);
//	printf("�۸�%d��Ǯ\n",b1.price);
//	b1.price = 24;
//	printf("�¼۸�%d\n", b1.price);*/ 
//	return 0;
//}


//�޸Ľṹ���ַ���strcpy- string copy �ַ�������-�⺯��#include<srting.h>
//int main()
//{
//	struct BOOK b2 = {"һ��ѧ��C����",88};
//	printf("������%s\n",b2.nema);
//	strcpy(b2.nema, "C++");
//	printf("������%s\n",b2.nema);
//
//
//	
//
//	return 0;
//}