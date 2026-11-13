#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "file.h"
void load_books(Book **head)
{
	FILE *fp;
	Book *new;
	char line[150];
	fp=fopen("books.txt","r");
	if(fp==NULL)
		return;
	while(fgets(line,sizeof(line),fp)!=NULL)
	{
		if(line[0]=='\n')
			continue;
		new=(Book *)malloc(sizeof(Book));
		if(new==NULL)
		{
			fclose(fp);
			return;
		}
		if(sscanf(line,"%49[^|]|%49[^|]|%d|%d",new->book_name,new->author_name,&new->pages,&new->count)!=4)
		{
			printf("Error reading book data:%s\n",line);
			free(new);
			continue;
		}
		new->next=*head;
		*head=new;
	}
	fclose(fp);
}
