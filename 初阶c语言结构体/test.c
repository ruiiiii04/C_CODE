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




//KiKi想知道已经给出的三条边a,b,c 能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形，等腰三角形，或普通三角形）
//输入描述：
//题目有多组输入数据，每一行输入三个a,b,c (0<a,b,c<1000),作为三角形的三个边，用空格隔开
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出"Equilateral Triangle", 等腰三角形则输出"Isosceles Triangle!", 其余的三角形则输出"Ordinary Triangle!", 反之输出"No Triangle!"
//示例1：
//输入：2 3 2
//	   3 3 3
//输出：Isosceles Triangle
//		Equilateral Triangle

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	
//	while(scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b > c && b + c > a && a + c > b)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral Triangle!\n");
//			}
//			else if ((a == b && a!=c) || (b == c && b!=a) || (a == c && a!=b))
//			{
//				printf("Isosceles Triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary Triangle!\n");
//			}
//
//
//		}
//		else
//		{
//			printf("Not a Triangle!\n");
//		}
//
//	}
//
//	return 0;
//}














//指针作业
//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//arr是一个整形一维数组

//void my_print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_print(arr, sz);
//
//
//
//
//	return 0;
//}








//将一个字符串str的内容颠倒过来，并输出。
//数据范围：1<=len(str)<=10000
//输入描述：输入一个字符串，可以有空格
//输出描述：输出逆序的字符串


//int main()
//{
//	char str[10001] = { 0 };
//	gets(str);	//接收字符串，有空格也不会停下		//scanf如果接收到空格会自动停止
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", str);
//
//
//
//	printf("%s", str);
//
//
//
//	return 0;
//}







//计算求和
//题目内容：求Sn = a+aa+aaa+aaaa+aaaaa 的前五项之和，其中a是一个数字
//例如：2+22+222+2222+22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	
//	scanf("%d%d", &a, &n);
//	int fix_a = a;
//	for (i = 0; i < n; i++)
//	{
//		
//		sum += a;
//		a = (a * 10) + fix_a;
//
//
//
//	}
//
//	printf("%d\n", sum);
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int v = 0;
//	scanf("%d%d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		v = (v * 10) + a;
//		sum += v;
//
//	}
//	printf("%d\n", sum);
//
//	return 0;
//
//}
















//求出0-100000之间的所有"水仙花数"并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如153 = 1^3 + 5^3 + 3^3,则153是一个"水仙花数"//因为三位数才算水仙花数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//1.要算有几个个位数
//		while (tmp/10)
//		{
//			count++;
//			tmp /= 10;
//		}
//		
//
//		//2.一个一个的乘以个位数次方，并总和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//
//	}
//
//
//
//	return 0;
//}






//打印菱形

//int main(){
//	int line = 0;	//菱形上半部分的行数
//	int i = 0;
//	scanf("%d", &line);
//
//	//菱形上半部分-----line
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//printf空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//printf *
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//	//菱形下班部分------line-1
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//printf空格
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}






//喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以多少汽水？

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int soda = money;
//	int empty = soda;
//
//	while (empty>=2)
//	{
//		soda += empty / 2;
//		empty = empty / 2 + empty % 2;
//
//	}
//	printf("%d", soda);
//	return 0;
//}








