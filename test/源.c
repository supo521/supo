#include <stdio.h>
#include <string.h>
MAX(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
   //static���ξֲ��������ֲ��������������ڱ䳤
   // static ����ȫ�ֱ�����ȫ�ֱ�����������ı䣬�þ�̬ȫ�ֱ���ֻ���ھ�̬ȫ�ֱ������ڵ�Դ�ļ���ʹ��
   //static  ���κ���Ҳ�ı��˺�����������--��׼ȷ��Ӧ���Ǹı��˺������������� ��ʹ�������ⲿ�������Ա�Ϊ�ڲ���������
void test()
	{
			static int a = 0;//staticʹa��ɾ�̬�ֲ�����
			a++;
	        printf("a=%d\n", a);
	}
//int main()
//{
//	int x = 1000;
//	int y = 100;
//	int max;
//	max = MAX(x, y);
//	printf("���ֵ��%d\n", max);
//}

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = strlen(arr);
	printf("%d\n", a);*/
	/*int a = 0;
	int b = ~a;
	printf("%d\n", b);
	return 0;*/
	//int a = 1;
	//int b = a++;//����++����ʹ�ã���++     �ȸ�b��ֵa����a+1�������Դ�����
	//printf("a=%d b=%d\n", a, b);
	//int a = 1;
	//int b = ++a;//ǰ��++����++����ʹ��
	//printf("a=%d b=%d\n", a, b);
	//int a = 10;
	//int b = a--;//����--����ʹ�ã���--    
	//printf("a=%d b=%d\n", a, b);
	//int a = 10;
	//int b = --a;//����--����--����ʹ��
	//printf("a=%d b=%d\n",a, b);
	/*int a = (int)3.14;
	printf("%d\n", a);*/
	//int a = 0;
	//int b = 5;
	//int c = a && b;//&&�߼��룬����Ϊ���Ϊ��
	//printf("c=%d\n", c);
	//int d = a || b;//||�߼�����һ��Ϊ���Ϊ��
	//printf("d=%d\n", d);
	//int a = 10;
	//int b = 100;
	//int max;
	//max = (a > b ? a : b);//(exp1?exp2:exp3); ��Ŀ�����������������������ͬif else�����exp1�����������exp2���������exp3��
	//printf("max=%d\n", max);
	//int arr[10] = { 0 };
	//arr[4];//�����[]��ʾ�±����ñ�Ƿ�
	//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
	//����--ԭ�룬���룬������ͬ
	//������
	//ԭ��  -->                     ����   -->                       ����
	//ֱ�Ӱ�������д������������    ԭ��ķ���λ���䣬������λȡ��   ����+1��
	//���磺-2
	//10000000000000000000000000010����ԭ��
	//11111111111111111111111111101��������
	//11111111111111111111111111110��������
	
			
//int main()
//{
//	/*int i = 0;
//	 while (i < 6)
//		{
//			test();
//				i++;
//		}
//	return 0;*/
//	extern int abc;//extern Ϊ�����ⲿ����
//	printf("%d\n",abc);
//	}
//extern int Add(int, int);
//int main()
//{
//	int a = 20;
//	int b = 90;
//	int sum;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#define MAX(x,y) (x>y?x:y)//define�����ܶ��峣�������ܶ���꣨������
//int main()
//{
//	int a = 10;
//	int*p = &a;//��һ�ֱ�����������ŵ�ַ�ģ����ֱ���Ϊָ�����(ָ�������������ŵ�ַ�ģ������ַ�Ǳ��˵ģ�
//	//printf("%p\n", p);
//	//*Ϊ�����ò�����
//	//*p=20;��ʾ��20���ֵ�׻�a�У�ʹ���ֵ��Ϊ20
//	*p = 20;
//	printf("%d\n", a);
//}
//{
//	int a = 20;
//	int b = 30;
//	int max;
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//}