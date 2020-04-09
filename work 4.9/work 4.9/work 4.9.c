#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void res(char* ch,int y,int x)
{
	int start = y;
	int end = x - 1;
	while (start < end)
	{
			int temp = ch[start];
			ch[start] = ch[end];
			ch[end] = temp;
			start++;
			end--;
	}
	

}
void reservse_res(char* ch)
{
	int len = strlen(ch);
	res(ch,0,len);
	int a = 0;
	int b = 0;
	while (ch[a] != '\0')
	{
		if (ch[b] != ' ' && ch[b] != '\0')
		{
			b++;
		}
		else
		{
			res(ch,a, b);
			b++;
			a = b;

		}
	}
}
int main()
{
	char ch[101] = { 0 };
	gets(ch);
	reservse_res(ch);
	puts(ch);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int a = m;
//	int b = n;
//	while (m % n)
//	{
//		int temp = m % n;
//		m = n;
//		n = temp;
//	}
//	printf("%d", a*b/n);
//	return 0;
//}

//int main() {
//    int n, ans = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            int x;
//            scanf("%d", &x);
//            ans += x;
//        }
//    }
//    printf("%d\n", ans);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void invert(char* ch, int start, int end)
//{
//    char temp;
//    while (start < end)
//    {
//        temp = ch[start];
//        ch[start] = ch[end];
//        ch[end] = temp;
//        start++;
//        end--;
//    }
//}
//void invertsentence(char* arr)
//{
//    int len = 0;
//    int start = 0;
//    int end = 0;
//    len = strlen(arr);
//    invert(arr, start, len - 1);
//    puts(arr);
//    while (arr[start] != '\0')
//    {
//        if (arr[end] != ' ' && arr[end] != '\0')
//        {
//            end++;
//        }
//        else
//        {
//            invert(arr, start, end - 1);
//            end++;
//            start = end;
//        }
//    }
//}
//int main()
//{
//    char a[100];
//    gets(a);
//    invertsentence(a);
//    puts(a);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, j, k;
//	char ch[1000] = { 0 };
//	scanf("%s", ch);
//	strlen(ch);
//	for (i = 0; i < strlen; i++)
//	{
//		if (ch == ' ')
//			break;
//	}
//}
//#include <stdio.h>
//#define MAXLINE 1000
//void reverse(char line[]);
//int getline(char line[], int maxline);
//void main()
//{
//    char line[MAXLINE] = { 0 };
//    if (getline(line, MAXLINE) > 0)
//    {
//        reverse(line);
//        printf("%s\n", line);
//    }
//}
//void reverse(char line[])
//{
//    int i = 0;
//    int j = 0;
//    char temp[MAXLINE] = { 0 };
//    while (line[i] != '\0')
//    {
//        i++;
//    }
//    printf("lenth:%d\n", i);
//    int len = i;
//    i = 0;
//    while (line[i] != '\0')
//    {
//        temp[len - 1 - i] = line[i];
//        i++;
//    }
//
//    //printf("%s\n",temp);
//    i = 0;
//    while (temp[i] != '\0')
//    {
//        line[i] = temp[i];
//        i++;
//    }
//
//}
//int getline(char s[], int lim)
//{
//    int i, c;
//    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//    {
//        s[i] = c;
//    }
//    if (c == '\n')
//    {
//        s[i] = '\0';
//    }
//    return i;
//}
//#include<stdio.h>
//#include<string.h>
//#define MAXLINE 1000
//int main()
//{
//    char line[MAXLINE], a;
//    int i, m;
//    while (scanf("%s", line) != EOF)
//    {
//        m = strlen(line);
//        for (i = 0; i < m / 2; i++)
//        {
//            a = line[i];
//            line[i] = line[m - 1 - i];
//            line[m - i - 1] = a;
//        }
//        printf("%s\n", line);
//    }
//    return 0;
//}
//#include <stdio.h>
//int cnt=0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(6);
//	printf("%d", cnt);
//}
