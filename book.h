#ifndef BOOK
#define BOOK

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[30];
	int cost;
	int page;
	int star;
}Book; //Book 구조체 정의

int selectMenu();

int CreateBook(Book *b);
void readBook(Book b);
void listBook(Book *b, int count);
int updateBook(Book *b);
int deleteBook(Book *b);

#endif
