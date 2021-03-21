#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//		if (p == NULL)
//	{
//		perror("calooc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//	//*(p + i) = i; 如果是malloc,里面就是随机值
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}