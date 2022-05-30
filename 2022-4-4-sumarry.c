//1.猜数字游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>//猜数字游戏
void menu()
{
	printf("******************");
	printf("** 1.play 0.exit**");
	printf("******************\n");
}
void game()
{
	//1.生成一个随机数
	int ret;
	ret=rand()%100+1;//生成一个随机数,1~100
	while(1)
	{
		int guess;
		printf("猜数字");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//null指的是空指针
	//时间戳：当前计算机的时间减去计算机的起始时间（1970.1.1 0：0：0）
	//拿时间戳生成随机数的生成起始点
	do//使用d0 while保证程序能至少执行一次
	{
		menu();//定义一个菜单
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误");
			break;
		}
	}
	while(input);
	return 0;
}

//2.goto语句
/*#define _CRT_SECURE_NO_WARNINGS 1
//goto语句
#include<stdio.h>
int main()
{
again:
	printf("hello NJUST\n");
	goto again;//goto是跳到哪里的意思，这里goto跳转到again，一直循环
	return 0;
}*/

//3.goto与again
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("hello NJUST\n");
	goto again;//goto是跳到哪里的意思，这里goto跳转到again，不执行printf("你好\n")
	printf("你好\n");
again:
	printf("呵呵呵");
	return 0;
}*/

//4.写一个程序，让电脑一分钟后关机，如果输入特定语句，则不会关机
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()//写一个程序，让电脑一分钟后关机，如果输入特定语句，则不会关机
{
	char input[20]={0};
	system("shutdown-s-t60");
again:
	printf("请注意你的电脑将在一分钟后关机，如果输入：钱坤大帅逼，就取消关机\n 请输入>:");
	scanf("%s",input);//输入字符串
	if(strcmp(input,"钱坤大帅逼")==0)//比较两个字符串
	{
		system("shutdown-a");
	}
	else
	{
		goto again;
	}

}*/
