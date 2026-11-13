#ifndef LIBRARY_H
#define LIBRARY_H
#include "types.h"

void add_new_book(Book **head);
void list_books(Book *head);
void count_book(Book *head);
void edit_book(Book *head);
void take_book(Book *head);
void find_book(Book *head);
void save_books(Book *head);
void load_books(Book **head);

#endif

