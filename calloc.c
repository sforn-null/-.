#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
		if (p == NULL)
	{
		perror("calooc");
		return 0;
	}
	int i = 0;
	for (i = 0;i < 10;i++)
	{
	//*(p + i) = i; Èç¹ûÊÇmalloc,ÀïÃæ¾ÍÊÇËæ»úÖµ
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}
