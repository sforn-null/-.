#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*)malloc(100);
	*p = 0;
	//可能存在的对NULL指针的解引用
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
	//对动态内存的越界访问
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

//对非动态开辟内存的释放

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("malooc");
		return 0;
	}
	int i = 0;
	//释放动态开辟内存空间的一部分-err
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
	//使用空间
	//对同一块动态开辟的内存多次释放-err

	free(p);
	//.....

	free(p);
	p = NULL;
	//重复释放
	//所以每次释放都要把p置成空指针
	return 0;
}


//忘记释放