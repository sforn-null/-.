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
//	//����ջ�ռ�ĵ�ַ����
//	char* str = NULL;
//	str = GetMemory();
//	//p����ʱ����
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//�����������û�б�����⣬ֻ��û���ͷ��ڴ�
//���ڴ�й©
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
//	free(str);//�ͷ�֮�󣬲���ϵͳ���п��ܰѿռ���������
//	//��strָ��ĵ�ַ����
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