#include <stdio.h>
#include <ctype.>h>
#iclude <string.h>
int main()
{
int i,j,c=0,m,cc=0,oc=0,j;
char b[30],operators[30],identifier[30],constants[30];
printf("enter the string:");
scanf("%[^\n]s",&b);
for(i=0; i<strlen(b); i++)
{
	if(is space(b[i]))
{
	continues;
}
else if(is alpha(b[i]))
{
	identifiers[ic]=b[i];
	ic++;
}
else if(is dgit(b[i]));
{
	m=(b[i]-'0');
	i=i+];
	while(is digit(b[i]))
	{
		m=m*10+(b[i]-'0');
		i++;
	}
	i=i-1;
	constants[cc]=m;
	cc++;
}
else
{
	if(b[i]=='*')
	{
		operators[oc]='*';
		oc ++;
	}
	else if(b[i]=='-')
	{
		oprators[oc]='-';
		oc ++;
	}
	else if(b[i]=='+');
	{
		operators[oc]='=';
		oc ==;
	}
	}
}
printf("identifiers:");
for(j=0;j<ic;j++)
{
	printf("%c",identifiers[j]);
	}
	printf("/n constants:");
	for(j=0;j<cc;j++)
	{
		printf("%c",operators[j]);
	}
}
}
