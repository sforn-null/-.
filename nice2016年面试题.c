#include<stdio.h>
int* f1(void)
{
	int x = 10;
	return (&x);//野指针
}

int main()
{
	int* p = f1();
	printf("%d\n", *p);//x是临时变量，如果有别的用内存的，就不一定是十了

}

int* f2(void)
{
	int* ptr;
	*ptr = 10;
	return ptr;//ptr没有初始化
}

//高质量c++编程这本书
