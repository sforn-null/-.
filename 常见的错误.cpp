#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*)malloc(100);
	*p = 0;
	//���ܴ��ڵĶ�NULLָ��Ľ�����
	return 0;
}

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	int i = 0;
	//�Զ�̬�ڴ��Խ�����
	for (i = 0;i <= 10;i++)
	{
		p[i] = i;
	}
	for (i = 0;i <= 10;i++)
	{
		printf("%d", p[i]);
	}
	free(p);
	p = NULL;
	return 0;
}

//�ԷǶ�̬�����ڴ���ͷ�

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("malooc");
		return 0;
	}
	int i = 0;
	//�ͷŶ�̬�����ڴ�ռ��һ����-err
	for (i = 0;i < 5;i++)
	{
		*p = 1;
		p++;
	}
	free(p);
	p = NULL;
	return 0;
}

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("malooc");
		return 0;
	}
	//ʹ�ÿռ�
	//��ͬһ�鶯̬���ٵ��ڴ����ͷ�-err

	free(p);
	//.....

	free(p);
	p = NULL;
	//�ظ��ͷ�
	//����ÿ���ͷŶ�Ҫ��p�óɿ�ָ��
	return 0;
}


//�����ͷ�