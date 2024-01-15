#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>






//第一题
//正整数A和正整数B的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数
//输入描述：输入量换个正整数A和B
//输出描述：输出A和B的最小公倍数
//示例1：
//输入：5 7
//输出：35


//不过关效率太慢了
//int main()
//{ 
//	int a = 0;
//	int b = 0;
//	int num = 0;
//	int ans = 0;
//	scanf("%d %d", &a, &b);
//	for (num = 1; ; num++)
//	{
//		if (num % a == 0 && num % b == 0)
//		{
//			ans = num;
//			break;
//		}
//
//	}
//	printf("%d", ans);
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d", m);
//
//	return 0;
//}


//效率更快的方法 
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int i = 1;
//    scanf("%d %d", &a, &b);
//
//    while (a * i % b)
//    {
//        i++;
//    }
//    printf("%d", i * a);
//
//    return 0;
//}







//将一句话的单词进行倒置，标点不倒置，比如I like beijing.经过函数后变为: beijing. like I
//输入描述：每个测试输入包含1个测试用例: I like beijing.输入用例长度不超过100
//输出描述：依次输出倒置之后的字符串，以空格分割
//示例1：
//输入：I like beijing
//输出：beijing. like I

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	//1.逆序字符串
//	reverse(arr, arr+len-1);
//	
//	char* start = arr;
//	//2.逆序每一个单词
//	while (*start)
//	{
//		
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//	printf("%s", arr);
//	return 0;
//}



