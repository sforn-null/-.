#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	//返回栈空间的地址问题
//	char* str = NULL;
//	str = GetMemory();
//	//p是临时变量
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//下面这个代码没有别的问题，只是没有释放内存
//会内存泄漏
//void GetMemory(char **p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//释放之后，操作系统就有可能把空间给别的用了
//	//但str指向的地址还在
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}