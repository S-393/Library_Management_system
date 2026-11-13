#ifndef TYPES_H
#define TYPES_H
typedef struct Book
{
	char book_name[50];
	char author_name[50];
	int pages;
	int count;
	struct Book *next;
}Book;
#endif
