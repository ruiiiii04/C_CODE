#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//1.2结构的声明
//struct PEO
//{
//	char name[20];
//	char tel[12];
//	char sex[7];
//	int height;
//
//}p1, p2;
////这两个是PEO结构体创建的全局变量

//int main()
//{
//	struct PEO pl = { 0 }; //结构体变量的创建
//
//	return 0;
//}




//2.结构成员的类型
//struct PEO
//{
//	char name[20];
//	char tel[12];
//	char sex[7];
//	int height;
//};
//
//struct ST
//{
//	struct PEO p;
//	int num;
//	float f;
//
//};
//
//int main()
//{
//	struct PEO peo1 = { "zhangsan", "01111111111", "male", 188 };		//结构体变量的创建
//	struct ST st1 = { {"lisa", "02222222222", "yrni", 170}, 100, 3.14f};
//
//	printf("%s %s %s %d\n", peo1.name, peo1.tel, peo1.sex, peo1.height);
//	printf("%s %s %s %d %d %f", st1.p.name, st1.p.tel, st1.p.sex, st1.p.height, st1.num, st1.f); 
//
//	return 0;
//}




//3.结构体成员访问
//struct PEO
//{
//	char name[20];
//	char tel[12];
//	char sex[7];
//	int height;
//};
//
//struct ST
//{
//	struct PEO p;
//	int num;
//	float f;
//
//};
//
//
//void print1(struct PEO* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tel, sp->sex, sp->height);
//
//}
//
//void print2(struct PEO sp)
//{
//	printf("%s %s %s %d\n", sp.name, sp.tel, sp.sex, sp.height);
//
//}
//
//int main()
//{
//	struct PEO peo1 = { "zhangsan", "01111111111", "male", 188 };		//结构体变量的创建
//	struct ST st1 = { {"lisa", "02222222222", "yrni", 170}, 100, 3.14f };
//
//	print1(&peo1);
//	print2(peo1);
//	return 0;
//}



//4.结构体传参
//结构体传参的时候，要传结构体的地址。











//结构体作业

//操作数题
//写一个函数返回参数二进制中 1 的个数


//函数方法1
//int count_num_1(int num)	//如果有负数无法准确计算
//int count_num_1(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if ((num % 2) == 1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	return count;
//}


//函数方法2 >>右移操作符
//int count_num_1(int num)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//
//	}
//	return count;
//
//}



//函数方法3（公式）n = n&(n-1) (会把最右边的1变成0)
//exp:n=15
//1111(n)
//1110(n-1)
//1110  n =(n&(n-1))  count +1
//1101 n - 1 
//1100 n = n&(n-1)  count +2
//1011 n - 1
//1000 n = n&(n-1) count +3
//0111 n - 1
//0000 n = n&(n-1)  count +4

//这个公式也可以用来判断一个数是不是2的n次方
//2^1 = 10
//2^2 = 100
//2^3 = 1000
// 
//if(n&(n-1) == 0)//如果是0，n就是2的次方
// 
//


//int count_num_1(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int n = count_num_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}







//两个int（32）位，整数m和n的二进制表达中，有多少个位（bit）不同


//方法1：两个32位每一个互相比较

//int bin_dif(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//
//	}
//	return count;
//}



//方法2：按位异或^，相异为1，相同为0
//int bin_dif(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	int num = m ^ n;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num>>i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//int bin_dif(int m, int n)
//{
//	int num = m ^ n;
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//}



//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//
//	int ret = bin_dif(m, n);
//	printf("%d\n", ret);
//
//	return 0;
//}






//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列；
//void print_odd(int num)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((num >> i) & 1));
//
//	}
//	printf("\n");
//}
//
//void print_even(int num)
//{
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((num >> i) & 1));
//	}
//
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	print_odd(num);
//	print_even(num);
//
//	return 0;
//}


//int i;//0全局变量，静态变量不初始化的时候，默认会被初始化为0
// 
//int main()
//{
//	i--;	//-1
//	//sizeof这个操作符计算返回的结果是size_t类型的，是无符号整形的
//
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//
//	return 0;
//}

//应该这样理解
//-1
//源码；100000000000000000000000000001
//反码：111111111111111111111111111110
//补码：111111111111111111111111111111   4294967295







//输出描述：针对每行输入，输出用"*"组成的X形图案。（多组输入）
//示例1；
//输入：5
//*   *
// * *
//  * 
// * *
//*   *
//输入：6
//*    *
// *  *
//  **
//  **  
// *  *
//*    *


//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) == 1)	//==1是接收的个数
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < num; i++)
//		{
//			for (j = 0; j < num; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == num - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//
//
//	return 0;
//}










//描述：Kiki想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天
//示例1；
//输入：2008 2
//输出：29

//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//	//0表示假，非零表示真
//	//逻辑操作符 && || ！ 的结果如果是真就是1，如果是假就是0
//}
//
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31,30, 31, 30,31 };	//以后可以用这种方式XD
//
//	while (scanf("%d %d", &year, &month) == 2)
//	{
//		if (is_leap_year(year) && month == 2 )
//		{
//			printf("%d\n", day[month] + 1);
//		}
//		else
//		{
//			printf("%d\n", day[month]);
//		}
//
//
//	}
//
//	return 0;
//}