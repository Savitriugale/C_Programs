#include<stdio.h>
#include<string.h>

void display(char *str)
{
	char temp;
	char *start=NULL,*end=NULL;
	
	if(str==NULL)
	{
		return;
	}
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
}
int main()
{
	char arr[10];
	
	printf("enter the string");
	scanf("%s",arr);
	
	printf("the original string :%s",arr);
	
	display(arr);
	
	printf("modified %s",arr);
	return 0;
}
