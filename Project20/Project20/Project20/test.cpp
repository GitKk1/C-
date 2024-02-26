#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "string.h"


/*******************************************************************************************************/
//int main()
//{
//
//	int a = printf("%d\n",  43);//printf的返回值是打印字符的个数，包括转义字符
//	printf("%d", a);
//	return 0;
//}
/*******************************************************************************************************/

/*******************************************************************************************************/
//void Div(int Tem)//将输入的数据按数位拆开
//{
//	if (Tem > 9)
//	{
//		Div(Tem/10);
//	}
//	printf("%d  ", Tem%10);
//}
//int main()
//{
//	int Num = 0;
//	scanf("%d", &Num);
//	Div(Num);
//	return 0;
//}
/*******************************************************************************************************/

/*******************************************************************************************************/
//int Jiecheng(int a)//1 2 3 4 5
//{
//	int Result = 0;
//	if (a > 1) 
//	{
//		Result = a * Jiecheng(a - 1);
//	}
//	else Result = 1;	
//	return Result;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d", &n);
//	a = Jiecheng(n);
//	printf("%d\n", a);
//	return 0; 
//}
/*******************************************************************************************************/

/*******************************************************************************************************/
//void reserve_string(char* str)
//{
//	int _length = strlen(str) - 1;
//	char Tem_Char = 0;
//	Tem_Char = *str;
//	*str = *(str + _length);
//	*(str + _length) = '\0';
//	if (strlen(str)>=2) {
//		reserve_string(str + 1);
//	}
//	*(str + _length) = Tem_Char;
//}
//
//int main()//将字符串中的两个字符两两调换位置
//{
//	char arr[] = "abcdef";
//	reserve_string(arr);
//	printf("%s", arr);
//	return 0;
//}
/*******************************************************************************************************/

void bubble_rank(int count,int *p)
{
	int temp_num = 0;

	for (int t=0; t < count-1; t++)
	{
		for (int i = 0; i < count - 1-t; i++)
		{
			if (*(p + i) > *(p + i + 1))
			{
				temp_num = *(p + i);
				*(p + i) = *(p + 1 + i);
				int test = *(p + i);
				*(p + 1 + i) = temp_num;
			}
			else
			{

			}
		}
	}

}
int main()//冒泡排序
{
	int num_arr[] = { 24,23,2,54,32,51,6 ,1,11,5,3};
	int count = sizeof(num_arr) / sizeof(num_arr[0]);
	bubble_rank(count,num_arr);
	for (int j = 0; j < count; j++)
	{
		printf("%d ", num_arr[j]);
	}
	return 0;
}