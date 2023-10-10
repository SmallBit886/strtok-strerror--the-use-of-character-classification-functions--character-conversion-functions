#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
//1.9 strtok --- char * strtok ( char * str, const char * sep );
//sep参数是个字符串，定义了用作分隔符的字符集合

//int main()
//{
//	//192.168.31.121
//	//192 168 31 121 ---- strtok
//	//zpw@bit.tech
//	//zpw bit tech  ---- strtok
//	char arr1[] = "zpw@bit.tech";
//	char p[] = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr1);
//	//切割buf中的字符串
//	
//	char* ret = NULL;
//	for (ret = strtok(arr1, p) ;ret!= NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(arr1, p);
//	//printf("%s\n", ret); //zpw
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);//bit
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);//tech
//	return 0;
//}

//1.10 strerror的使用 --- char * strerror ( int errnum );
//错误报告：返回错误码，所对应的错误信息

//
//int main()
//{
//	//0  1  2  错误码
//	//No error     Operation not permitted    No such file or directory   错误信息
//
//	char* str = strerror(0);
//	printf("%s\n", str);//No error
//	char* str1 = strerror(1);
//	printf("%s\n", str1);//Operation not permitted
//	char* str2 = strerror(2);
//	printf("%s\n", str2);//No such file or directory
//	
//	char* str3 = strerror(errno);
//	printf("%s\n", str3);//No error
//	//errno是一个全局的错误码的变量
//	//库函数执行过程中，发送错误，就会把对应的错误码，赋值到errno中
//
//	//打开文件
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//No such file or directory
//	}
//	else
//	{
//		printf("open file success\n");//open file success
//	}
//	return 0;
//}

//字符分类函数：
/*
函数 如果他的参数符合下列条件就返回真
iscntrl 任何控制字符
isspace 空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
isdigit 十进制数字 0~9
isxdigit 十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
islower 小写字母a~z
isupper 大写字母A~Z
isalpha 字母a~z或A~Z
isalnum 字母或者数字，a~z,A~Z,0~9
ispunct 标点符号，任何不属于数字或者字母的图形字符（可打印）
isgraph 任何图形字符
isprint 任何可打印字符，包括图形字符和空白字符
*/
#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	char ch1 = '@';
//	int ret = islower(ch);
//	int ret1 = islower(ch1);
//	printf("%d\n", ret);//2  返回真
//	printf("%d\n", ret1);//0  返回假
//	return 0;
//}

//字符转换：
//int tolower(int c);
//int toupper(int c);
int main()
{
	//char ch1 = tolower('I');
	//char ch2 = toupper('t');
	//putchar(ch1);//i

	//全部转换成小写
	char arr[] = "I am Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);// i am student
	return 0;
}