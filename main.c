#include <stdio.h>
#include<stdlib.h>
#include "library.h"
#include "file.h"

int main()
{
    Book *head = NULL;
    load_books(&head);
    char choice;
    while(1)
    {
	    printf("\n -------------MENU------------\n");
	    printf("A/a. Add a book to library\n");
	    printf("L/l. List available books in library with book name and author name \n"); 
	    printf("C/c. display Count of specific book \n");
	    printf("E/e. Edit book info (author name/book name/pages info/no. of books info )\n"); 
	    printf("T/t. Take a book from library.\n"); 
	    printf("F/f. Find a book in library \n");
	    printf("S/s. Save books info in file\n");
	    printf("Q/q. Quit from app\n");
	    printf("enter the choice:");
	    scanf(" %c",&choice);
	    switch(choice)
	    {
   		case 'A':
		case 'a':
			add_new_book(&head);
			break;
   		case 'L':
		case 'l':
    			list_books(head);
    			break;
		
   		case 'C':
		case 'c':
			count_book(head);
			break;

   		case 'E':
		case 'e':
			edit_book(head);
			break;

   		case 'T':
		case 't':
		       	take_book(head);
			break;

   		case 'F':
		case 'f':
			list_books(head);
		        break;

		case 'S':
		case 's':
			save_books(head);
			break;
   		case 'Q':
		case 'q':
			printf("exiting Library management system\n");
			exit(0);
		default:printf("invalid choice\n");
	    }
    }
}


