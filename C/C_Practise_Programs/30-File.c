#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch,s[10]="Sai Mohan";
	int i=strlen(s);
	fp=fopen("Ts.txt","r+");
	if(fp==NULL)
	{
		printf("Error in File Opening\n");
		exit(1);
	}
	/*for(int j=0;j<i;j++)
	{
		fputc(s[j],fp);
	}*/
	fputs("Thundersoft",fp);
	fseek(fp,0,SEEK_SET);
	ch=fgetc(fp);
		while(ch!=EOF)
		{
			
			printf("%c",ch);
			ch=fgetc(fp);
			
		}
	fclose(fp);
	return 0;
}
