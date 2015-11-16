#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int get_char(char *p);
int get_char(char * p)
{
        strcpy(p,"hello");
        return 1;
}

int main()
{
	printf("%d\n",(1<<31));
	char a[10] = {0};
	get_char(a);
	printf("%s",a);
	char *p =NULL;
	p = (char*) malloc(20);
	get_char(p);
	printf("%s",p);
	printf("hello world\n");
	printf("My heart aches for you\n");
	return 0;
}
