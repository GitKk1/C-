#include<stdio.h>

/***************************************************************************************/
//int main()
//{


	//int a = 3.14;
	//printf("%d", a);//数据类型不匹配此处会有警告 但可以运行；
	////推荐改正
	//int a = (int)3.14;//强制类型转换
	//printf("%d", a);
	/*return  0;*/ 
//}
/***************************************************************************************/


/***************************************************************************************/
//int main()   //注意逻辑运算符和算术运算符的区别
//{
//	int a = 5;  //0101
//	int b = 0;  //0100
//	int c = a || b;
//	int d = a && b;
//	printf("或：% d", c);
//	printf("与：% d", d);
//
//	return 0;
//
//}
/***************************************************************************************/


/***************************************************************************************/
//int main()   //内存中存放的是补码
//{

	//int a = 1; //00000000 00000000 00000000 00000001
	////内存中应该是补码 00000000 00000000 00000000 00000001
	////取反后 11111111 11111111 11111111 11111110  这是补码
	////再换算成反码  11111111 11111111 11111111 11111101
	////再换算成原码  10000000 00000000 00000000 00000010  -2 
	//printf("%d", ~a);
	//return 0;
//}
/***************************************************************************************/

/***************************************************************************************/
//int main()   //内存中存放的是补码
//{

	//int a = 0;
	//int b = (++a) + (++a) + (++a);
	//printf("%d", b);//不正确的代码
	//return 0;
//}
/***************************************************************************************/