#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	char a = '68';/*char类型是两个字节大小*/
//	printf("%c\n", a);
//	char b = 'a';//打印结果是变量的ascii
//	printf("%d", b);
////
////	//char b = 'ab'; //默认打印最后一个字符
////	printf("%d", a);
////	
//	return 0;
//}

//int main()//当定义为整型时，是否可以赋值为字符
//{
//	int a = 0;
//	a = 'a';
//	printf("%d\n", a);
//	printf("%c", a);
//	return 0;
//}
////这样看来整形和字符型的区别就在于空间的大小，实际上是可以互相赋值的，但最好不要这样做

//int main()//关于double和float的精度问题
//{
//	double a =153452.11126454;
//	float b = 111234.23256;
//	printf("%f\n", a);
//	printf("%lf\n", a);
//	printf("%f\n", b);
//	printf("%lf\n", b);
//	return 0;
//}


//int main()//1+1/2+1/3+.....+1/100
//{
//	int i = 0;
//	double sum = 0;
//
//	for (i = 1; i < 101; i++)
//	{
//		sum =sum + 1.0 / i;//若把这里的1.0改成1计算结果会是保留整数
//	}
//	printf("%lf", sum);
//	return 0;
//}