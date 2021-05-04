#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//练习1
//能否打印出hello world
//内存泄漏
void GetMemory(char* p)
{
	p = (char*)malloc(100);//p是形参
}

void  Test(void)
{
	char* str = NULL;
	GetMemory(str);//str是实参 没有改变
	strcpy(str, "hello world");//str还是空指针
	printf(str);
}
int main()
{
	Test();
	return 0;
}

void GetMemory(char ** p)
{
	*p = (char*)malloc(100);
}

void  Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
  str=NULL;
}
int main()
{
	Test();
	return 0;
}

char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void  Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
  str=NULL;
}
int main()
{
	Test();
	return 0;
}
