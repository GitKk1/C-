#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	while (i <= 7)
//	{
//		if (i == 4)
//			break;//break��whileѭ���е�����
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
//			continue;//continue��whileѭ���е�����
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
//	while((a=getchar())!=EOF)//EOFΪ-1���Ǹ�����ֵ;
//	putchar(a);
//	return 0;
//}

int main()
{
	char password[20] = {0};
	printf("����������:");
	scanf("%s",password);
	printf("�Ƿ�ȷ����������(y/n)");
	//char i = 0;
	//while ((i = getchar()) != '\n')
	//{
	//}
	int a = getchar();
	if (a == 'y')
	{

			printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}
	return 0;
}