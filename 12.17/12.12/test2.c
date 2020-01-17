#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 100;
//	int a = 1;
//	while (i >=100 && i <= 200)
//	{
//		for (a = 2; a < i; a++)
//		{
//			if (i%a == 0)
//			{
//				break;
//			}
//		}
//			if (i == a)
//			{
//				printf("%d\n", i);
//			}
//			i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1000;
//	while (a>=1000 && a<=2000)
//	{
//		if (a%4 == 0)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int a = 1;
//	printf("输入两个数");
//		scanf("%d %d", &num1, &num2);
//	/*while (a < num1 || a < num2)
//	{
//		if (num1%a == 0 && num2%a == 0)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}*/
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;//01.a=1;b=1;
//		if (b % 3 == 1)//02.b=4,a=2;
//		{               //03.b=7,a=3;
//			b = b + 3;  //04.b=10,a=4;
//			continue;  //05.b=13,a=5;
//		}              //06.b=16,a=6;
//		b = b - 5;    //07.b=19,a=7;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	for (a=1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d = %2d\t", a, b, a*b);
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max =0;
//	printf("输入十个数");
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++);
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//	
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i = 0;
	int j = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		sum += j*1.0 / i;
		j = -j;
		printf("%lf", sum);
	}
	printf("sum = %lf\n", sum);
	return 0;
}
