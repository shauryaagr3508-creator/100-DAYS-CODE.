/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
int main()
{
char str[100];
int i=0,j=0,last=0;
printf("Enter full name: ");
scanf("%[^\n]",str);
while(str[i]!='\0')
{
if(str[i]==' ')
{
printf("%c. ",str[j]);
j=i+1;
last=j;
}
i++;
}
printf("%s",&str[last]);
return 0;
}