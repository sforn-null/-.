#include<stdio.h>
#include<stdlib.h>

////��Ҫ������С���ǵ���realloc
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//		int* p = (int*)calloc(10, sizeof(int));
//		if (p == NULL)
//	{
//		perror("calooc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		p[i] = i + 1;
//	}
//	//������С
//	//realloc�����ռ����2�����
//	//1.�ڵ�һ��ռ�������㹻��Ŀռ���������
//	//2.������ʱ��,�ڶ�������һ�����֮ǰ�ռ��ܴ�С��λ��
//	//��֮ǰ�����ݿ������µĿռ���,Ȼ��֮ǰ�ռ��ͷ�
//	//Ȼ�󷵻��¿ռ����ʼ��ַ
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	free(p);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}