#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("\n alphabets");
else
printf("\n not an alphabets");
return(0);
}
