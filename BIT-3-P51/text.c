#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
//1.9 strtok --- char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����

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
//	//�и�buf�е��ַ���
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

//1.10 strerror��ʹ�� --- char * strerror ( int errnum );
//���󱨸棺���ش����룬����Ӧ�Ĵ�����Ϣ

//
//int main()
//{
//	//0  1  2  ������
//	//No error     Operation not permitted    No such file or directory   ������Ϣ
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
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//�⺯��ִ�й����У����ʹ��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//���ļ�
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

//�ַ����ຯ����
/*
���� ������Ĳ����������������ͷ�����
iscntrl �κο����ַ�
isspace �հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
isdigit ʮ�������� 0~9
isxdigit ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
islower Сд��ĸa~z
isupper ��д��ĸA~Z
isalpha ��ĸa~z��A~Z
isalnum ��ĸ�������֣�a~z,A~Z,0~9
ispunct �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
isgraph �κ�ͼ���ַ�
isprint �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
*/
#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	char ch1 = '@';
//	int ret = islower(ch);
//	int ret1 = islower(ch1);
//	printf("%d\n", ret);//2  ������
//	printf("%d\n", ret1);//0  ���ؼ�
//	return 0;
//}

//�ַ�ת����
//int tolower(int c);
//int toupper(int c);
int main()
{
	//char ch1 = tolower('I');
	//char ch2 = toupper('t');
	//putchar(ch1);//i

	//ȫ��ת����Сд
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