#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	while (i <= 7)
//	{
//		if (i == 4)
//			break;//break在while循环中的作用
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	while (i <= 7)
//	{
//		if (i == 4)
//			continue;//continue在while循环中的作用
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//int a = 121;
//	//putchar(a);
//	int a;
//	while((a=getchar())!=EOF)//EOF为-1，是个错误值;
//	putchar(a);
//	return 0;
//}

int main()
{
	char password[20] = {0};
	printf("请输入密码:");
	scanf("%s",password);
	printf("是否确认输入密码(y/n)");
	//char i = 0;
	//while ((i = getchar()) != '\n')
	//{
	//}
	int a = getchar();
	if (a == 'y')
	{

			printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}