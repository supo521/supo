#include <stdio.h>
#include <string.h>
MAX(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
   //static修饰局部变量，局部变量的生命周期变长
   // static 修饰全局变量，全局变量的作用域改变，让静态全局变量只能在静态全局变量所在的源文件中使用
   //static  修饰函数也改变了函数的作用域--不准确，应该是改变了函数的连接属性 ，使函数的外部连接属性变为内部链接属性
void test()
	{
			static int a = 0;//static使a变成静态局部变量
			a++;
	        printf("a=%d\n", a);
	}
//int main()
//{
//	int x = 1000;
//	int y = 100;
//	int max;
//	max = MAX(x, y);
//	printf("最大值：%d\n", max);
//}

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = strlen(arr);
	printf("%d\n", a);*/
	/*int a = 0;
	int b = ~a;
	printf("%d\n", b);
	return 0;*/
	//int a = 1;
	//int b = a++;//后置++，先使用，后++     先给b赋值a，后a+1，后面以此类推
	//printf("a=%d b=%d\n", a, b);
	//int a = 1;
	//int b = ++a;//前置++，先++，后使用
	//printf("a=%d b=%d\n", a, b);
	//int a = 10;
	//int b = a--;//后置--，先使用，后--    
	//printf("a=%d b=%d\n", a, b);
	//int a = 10;
	//int b = --a;//后置--，先--，后使用
	//printf("a=%d b=%d\n",a, b);
	/*int a = (int)3.14;
	printf("%d\n", a);*/
	//int a = 0;
	//int b = 5;
	//int c = a && b;//&&逻辑与，两项为真便为真
	//printf("c=%d\n", c);
	//int d = a || b;//||逻辑或，有一项为真便为真
	//printf("d=%d\n", d);
	//int a = 10;
	//int b = 100;
	//int max;
	//max = (a > b ? a : b);//(exp1?exp2:exp3); 三目运算符（条件操作符），如同if else，如果exp1成立，则输出exp2，否则输出exp3。
	//printf("max=%d\n", max);
	//int arr[10] = { 0 };
	//arr[4];//这里的[]表示下标引用标记符
	//只要是整数，内存中存储的都是二进制的补码
	//正数--原码，反码，补码相同
	//负数：
	//原码  -->                     反码   -->                       补码
	//直接按照正负写出二进制序列    原码的符号位不变，其他按位取反   反码+1得
	//例如：-2
	//10000000000000000000000000010——原码
	//11111111111111111111111111101——反码
	//11111111111111111111111111110——补码
	
			
//int main()
//{
//	/*int i = 0;
//	 while (i < 6)
//		{
//			test();
//				i++;
//		}
//	return 0;*/
//	extern int abc;//extern 为声明外部符号
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
//#define MAX(x,y) (x>y?x:y)//define除了能定义常量，还能定义宏（函数）
//int main()
//{
//	int a = 10;
//	int*p = &a;//有一种变量是用来存放地址的，这种变量为指针变量(指针变量是用来存放地址的，这个地址是别人的）
//	//printf("%p\n", p);
//	//*为解引用操作符
//	//*p=20;表示将20这个值套回a中，使其的值变为20
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