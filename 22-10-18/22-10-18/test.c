//#define _CRT_SECURE_NO_WARNINGS 1
////����a=1��nΪ3
////����1+11+111
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int n = 3;
//	int x = 1;
//	int z = 0;
//	for (x = 1; x <= n; x++)
//	{
//		for (z = 1; z <= x; z++)
//		{
//
//			z=z*10
//
//		}
//
//
//
//	}
//
//
//
//
//	return 0;
//}



#include<stdio.h>
int main()
{
	int x = 1;
	int y = 1;
	int z = 0;//z����ѭ��
	int w = 0;
	int a = 2;//����a=2
	int sum = 0;
	int sum1 = 0;
	int n = 3;//����n=3
	//����2+22+222
	for (z = 1; z <= n; z++)
	{
		for (x = 1; x <= z; x++)
		{
			y = y * 10;
			w = y / 10;
			a = w * a;
			sum = a + sum;
			//printf("%d\n", a);
			a = 2;
		}
		sum1 = sum1 + sum;
		sum = 0;
		y = 1;
	}
	printf("%d\n", sum1);

	return 0;
}