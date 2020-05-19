// gg.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS//提示警告，所以忽略它
#include <iostream>
#include <stdio.h>
#include <string>
void CharCount() //字符统计函数
{
	FILE *fp;
	int c = 0;
	char ch;
	if ((fp = fopen("f:\\file.txt", "rt")) == NULL)
	{
		printf("file read faiure.");
	}
	ch = fgetc(fp);//获取文件中的字符
	while (ch != EOF)//eof为文件末尾
	{
		c++;
		ch = fgetc(fp);
	}
	printf("char count is ：%d.\n", c);
	fclose(fp);
}
void WordCount() //单词统计函数
{
	FILE *fp;
	int w = 1;
	char ch;
	if ((fp = fopen("f:\\file.txt", "rt")) == NULL)
	{
		printf("file read failure.");
	}
	ch = fgetc(fp);
	while (ch != EOF)
	{

		if (ch == ',' || ch == ' ')
		{
			w++;
		}

		ch = fgetc(fp);


	}
	printf("word count is ：%d.\n", w);
	fclose(fp);

}

int main(int argc, char *argv[])
{
	if ((strcmp(argv[1], "-c") == 0) && (strcmp(argv[2], "file.txt") == 0))
	{
		CharCount();
	}

	if ((strcmp(argv[1], "-w") == 0) && (strcmp(argv[2], "file.txt") == 0))
	{
		WordCount();
	}

	return 0;
}// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
