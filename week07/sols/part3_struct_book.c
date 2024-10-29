// struct_book
// This program demonstrates how to use pointers and structs
// Written by Sofia De Bellis, z5418801, on march 2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE 100
#define MAX_AUTHOR 100

struct book {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int year;
};

void modify_book(struct book *book);

int main() {
    struct book book;

    strncpy(book.title, "To Kill a Mockingbird", MAX_TITLE);
    strncpy(book.author, "Harper Lee", MAX_AUTHOR);

    book.year = 1960;

    printf("Before modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    modify_book(&book);

    printf("After modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", book.title, book.author, book.year);

    return 0;
}

void modify_book(struct book *book) {
    book->year = 1925;
    strncpy(book->title, "The Great Gatsby", MAX_TITLE);
    strncpy(book->author, "F. Scott Fitzgerald", MAX_AUTHOR);
}
