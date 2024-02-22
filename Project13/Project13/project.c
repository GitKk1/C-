#include<stdio.h>

/******************************************************************/
//int Add(int *Tem)
//{
//	int c = 10;
//	c += *Tem;
//	printf("c : %d\n", c);
//	*Tem = 1;
//}
//int main()     //函数传参
//{
//	int a = 10;
//	int* pa = &a;
//	Add(pa);
//	printf("%d\n", a);
//	return 0;
//}
/******************************************************************/

/******************************************************************/
//int main()             //用指针判断字符串长度
//{
//	char arr1[] = "hello";
//	char *p;
//	int count = 0;
//	for (p = arr1; *p != '\0'; p++)
//	{
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
/******************************************************************/


/******************************************************************/
//int strlen_my(char arr[])
//{
//	char count = 0;
//	char* p1;
//	for (p1 = arr; *p1 != '\0'; p1++)
//		{
//			count++;
//		}
//	return count;
//}
//
//int main()             //对上个程序的调整（将判断内容用函数来实现）
//{
//	char arr1[] = "hello";
//	char* p=arr1;
//	int count = strlen_my(arr1);//数组名是数组首元素的地址
//	printf("%d", count);
//	return 0;
//}
/******************************************************************/

/******************************************************************/
void FindMaxCount(int length,int* Tem,int* max,int* count )//利用指针返回两个返回值
{
	* max = Tem[0];
	for(int i=1;i<length;i++)
	{
		if (*max < Tem[i])
		{
			*count = 1;
			*max = Tem[i];
		}
		else if (*max == Tem[i])
		{
			(*count)++;
		}
	 }

}

int main()
{
	int arr[] = { 23,23,34,33,12,33,34,34 };
	int Max = 0;
	int Count = 0;
	FindMaxCount(sizeof(arr) / sizeof(arr[0]), arr, &Max, &Count);
	printf("Max=%d\n", Max);
	printf("Count=%d", Count);

	return 0;
}

/******************************************************************/
