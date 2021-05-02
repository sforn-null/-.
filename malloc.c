#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(100);
	//开辟100哥字节的空间 返回的是起始的地址
	//内存开辟失败会返回空指针
	if (p == NULL)
	{
		perror("malooc");//报错
	}
	else	
  {
		int i = 0;
		for (i = 0;i < 25;i++)
		{
			*(p + i) = i;
  		printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;//在free之后一定要加上这个
	return 0;
}
//如果从堆区上申请了空间,不释放
//这就是内存泄漏
//所以要回收释放内存  free
