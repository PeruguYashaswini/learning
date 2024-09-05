#include<stdio.h>
void main()
{
FILE *fp;
char fname[20],ch;
printf("Enter the file name: ");
gets(fname);
fp=fopen(fname,'r');
if(fp!=NULL)
{
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
}
else
{
printf("File doesn't exists);
}
}

