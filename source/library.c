#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "library.h"
void add_new_book(Book **head)
{
	Book *new;
	new=malloc(sizeof(Book));
	if(new==NULL)
	{
		printf("memory allocation failed");
		exit(0);
	}
	printf("enter the book name:");
	scanf(" %[^\n]", new->book_name);

	printf("Enter author name: ");
	scanf(" %[^\n]", new->author_name);
	
	printf("enter the number of pages:");
	scanf("%d",&new->pages);
	
	printf("enter the number of book:");
	scanf("%d",&new->count);
	new->next =*head;
	*head=new;
	printf("book added successfully\n");
}

void list_books(Book *head)
{
	Book *temp;
	temp=head;
	if(temp==NULL)
	{
		printf("library is empty\n");
		return ;
	}
	printf("\nBook name\t\tAuthor Name\n");
	printf("-------------------------------------\n");
	while(temp!=NULL)
	{
		printf("%-20s\t%s\n",temp->book_name,temp->author_name);
		temp=temp->next;
	}
}

void count_book(Book *head)
{
	char name[50];
	Book *temp;
	int found=0;
	temp=head;
	printf("enter the book name:");
	scanf(" %[^\n]",name);
	while(temp!=NULL)
	{
		if(strcmp(temp->book_name,name)==0)
		{
			printf("number of books available:%d\n",temp->count);
			found =1;
			break;
		}
		temp=temp->next;
	}
	if(found==0)
		printf("book not found \n");
}

void find_book(Book *head)
{
	char name[50];
	char choice;
	Book *temp;
	int found=0;
	temp=head;
	printf("\n1.search by book name\n");
	printf("2.search by author name:\n");
	printf("enter the choice: \n");
	scanf(" %c",&choice);
	if((choice!='1') && (choice!='2'))
	{
		printf("invalid choice\n");
		return ;
	}
	if(choice=='1')
		printf("enter the book name:");
	else
		printf("enter author name:");
	scanf(" %[^\n]",name);
	while(temp!=NULL)
	{
		if((choice=='1' && strcmp(temp->book_name,name)==0)||(choice=='2' && strcmp(temp->author_name,name)==0))
		{
			printf("book name:%s\n",temp->book_name);
			printf("author namr:%s\n",temp->author_name);
			printf("Pages:%d\n",temp->pages);
			printf("total books:%d\n",temp->count);
			found=1;
		}
		temp=temp->next;
	}
	if(found==0)
	printf("book not found\n");

}

void edit_book(Book *head)
{
	char name[50];
	Book *temp;
	int found=0;
	temp=head;
	printf("enter the book name to edit:\n");
	scanf(" %[^\n]",name);
	while(temp!=NULL)
	{
		if(strcmp(temp->book_name,name)==0)
		{
			printf("enter the book name: ");
			scanf(" %[^\n]",temp->book_name);

			printf("enter the author name: ");
			scanf(" %[^\n]",temp->author_name);

			printf("enter new number of pages: ");
			scanf(" %d",&temp->pages);
			
			printf("enter new book count: ");
			scanf(" %d",&temp->count);
			printf("book details updated successfully\n");
			found=1;
			break;
		}
		temp=temp->next;
	}
	if(found==0)
	printf("book not found\n");
}

void take_book(Book *head)
{
char name[50];
Book *temp;
int found=0;
temp=head;
printf("enter the book name to borrow:");
scanf(" %[^\n]",name);
while(temp!=NULL)
{
	if(strcmp(temp->book_name,name)==0)
	{
		found=1;
		if(temp->count>0)
		{
			temp->count--;
			printf("book borrowed successfully!\n");
			printf("available books:%d\n",temp->count);
		}
		else
			printf("book not found\n");
		break;
	}
temp=temp->next;
}
if(found==0)
	printf("book not found\n");
}

void save_books(Book *head)
{
FILE *fp;
Book *temp;
fp = fopen("books.txt", "w");
if(fp == NULL)
{
    printf("Unable to open file\n");
    return ;
}
temp = head;
while(temp != NULL)
{
    fprintf(fp, "%s %s %d %d\n",
            temp->book_name,
            temp->author_name,
            temp->pages,
            temp->count);

    temp = temp->next;
}
fclose(fp);
printf("Book information saved successfully\n");
}

