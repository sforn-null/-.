#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(100);
//	//����100���ֽڵĿռ� ���ص�����ʼ�ĵ�ַ
//	//�ڴ濪��ʧ�ܻ᷵�ؿ�ָ��
//	if (p == NULL)
//	{
//		perror("malooc");//����
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 25;i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;//��free֮��һ��Ҫ�������
//	return 0;
//}
//����Ӷ����������˿ռ�,���ͷ�
//������ڴ�й©
//����Ҫ�����ͷ��ڴ�  free