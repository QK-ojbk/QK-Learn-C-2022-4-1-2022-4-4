//1.编写乘法口诀表
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//编写一个输出是乘法口诀表
{
	int i;
	int c;
	for(i=1;i<10;i++)
	{
		int j;
		for(j=1;j<=i;j++)
		{
			c=i*j;
			printf("%d*%d=%2d  ",i,j,c);
		}
		printf("\n");
	}
	return 0;
}

//2.比较三个数的大小，并从大到小输出
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//将三个数从大到小输出
{
	int a;
	int b;
	int c;
	printf("输入a,b,c三个数的值\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b);
	{
		int temp=a;
		a=b;
		b=temp;
	}
	if(a<c)
	{
		int temp=a;
		a=c;
		c=temp;
	}
	if(b<c)
	{
		int temp=b;
		b=c;
		c=temp;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}*/

//3.利用辗转相除法，求两个数的最大公约数
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//求两个数的最大公约数，利用辗转相除法
int main()
{
	int m;
	int n;
	int r;
	printf("输入初始参数m、n，以便求二者的最大公约数：>");
	scanf("%d,%d",&m,&n);
	while(m%n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("两者的最大公约数是：%d\n",n);
	return 0;
}*/


//4.计算1-1/2+1/3-1/4……
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int flag=1;
	double sum=0.0;//因为会有小数，所以采用双精度
	for(i=1;i<=100;i++)
	{
		sum=sum+flag*1.0/i;
		flag=-flag;
	}
	printf("求和值等于：%lf\n",sum);//这里必须使用“lf”,lf意为长浮点型，打印长浮点型，%d意为打印整型（整数）
	return 0;
}*/

//5.找出100~200之间的所有素数，并标上序号
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//找出100~200之间的所有素数，并标上序号
{
	int i=100;
	int a=0;
	for(i=100;i<=200;i++)
	{
		int j;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
		{
			a++;
			printf("第%d个素数%d\n",a,i);
		}
	}
	printf("100~200之间一共有%d个素数",a);
	return 0;
}*/

//6.已知一个无序数组，找出数组中最大的数字，并确定其在数组中的下标
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//已知一个无序数组，找出数组中最大的数字，并确定其在数组中的下标
int main()
{
	int arr[20]={5,3,4,8,6,9,11,5,13,0,2,5,4,7,15,6,5,8,9,10};
	int max=arr[0];
	int i;
	int a=0;
	for(i=0;i<=20;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			a=i;
		}
	}
	printf("该数组中最大的数为%d,其下标为%d\n",max,a);
	return 0;
}*/

//7.