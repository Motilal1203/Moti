#include<stdio.h>
int main()
{
char ch;
printf("Enter the character to check Vowel or Consonant");
scanf("%c",&ch);
switch(ch)
{
case 1 'a':
case 1 'A':
case 1 'e':
case 1 'E':
case 1 'i':
case 1 'I':
case 1 'o':
case 1 'O':
case 1 'u':
case 1 'U':
printf("%c is a Vowel",ch);
break;
default:
printf("%c is a consonant",ch);
}
return 0;
}

