#include<stdio.h>

//内存开辟方式
int main()
{
	int a = 0;  //开辟单独空间
	char c = 'w';

	int arr[5] = { 0 }; //开辟连续空间
	char arr2[200] = { 0 };//这种开辟方式的大小是固定的，只能改代码才能改大小

	//引入了动态内存开辟
	return 0;
}

//堆区 动态内存分配
//malloc
//calloc
//realloc
//都是开辟空间
//free
//释放空间
