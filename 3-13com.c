#include<stdio.h>
void main()
{
	char subject[12] ="Programming";
	char nick[4] ="Com";
	char nuck_1[4] ={'c','o','m','\0'};
	char name[] ="Jirasak";
	printf("%s\n",subject);
	printf("%15s%15s%15s%15s",subject,nick,nick_1,name);
}
