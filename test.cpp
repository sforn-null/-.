#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��ϰ1
//�ܷ��ӡ��hello world
//�ڴ�й©
void GetMemory(char* p)
{
	p = (char*)malloc(100);//p���β�
}

void  Test(void)
{
	char* str = NULL;
	GetMemory(str);//str��ʵ�� û�иı�
	strcpy(str, "hello world");//str���ǿ�ָ��
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