#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/***********************************************************/
//int main()
//{
//	int input = 0;
//	printf("外面温度是否低于零下？\n");
//	printf("yes/no?");
//	scanf("%d", &input);
//
//	if (input == 0)
//		printf("t-shirt");
//	else
//		printf("sweater");
//	
//	return 0;
//}
/***********************************************************/


/***********************************************************/
//int main()
//{
//	int line = 0;
//	while (line < 3000)
//	{
//		printf("workhard %d\n", line);
//		line++;
//	}
//	if(line==3000)
//	{
//		printf("success");
//	}
//	return 0;
//}
/***********************************************************/

/***********************************************************/
int Fib(int a)//1   1   2   3   5   8   13 递归实现斐波那契数列
{
	if (a < 3)
		return 1;
	else
		return Fib(a-1)+Fib(a-2);
}

int main()
{
	int n = 9;
	//scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

/***********************************************************/
