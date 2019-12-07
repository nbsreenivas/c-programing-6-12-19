// find out given character is upper case or lower case or digit or special char
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65&& ch<=90)
	printf("its upper case");
   	else if(ch>=97&& ch<=122)
	printf("its a lower case");
	else if (ch>=48&&ch<=57)
	printf ("its a number");
	else 
	printf("its a special character");
	return 0;
	
}
