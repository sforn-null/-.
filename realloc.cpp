#include<stdio.h>
#include<stdlib.h>

////想要调整大小还是得用realloc
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
//	//调整大小
//	//realloc调整空间存在2种情况
//	//1.在第一块空间后面有足够大的空间用来调整
//	//2.不够的时候,在堆区上找一块加上之前空间总大小的位置
//	//将之前的数据拷贝到新的空间上,然后将之前空间释放
//	//然后返回新空间的起始地址
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