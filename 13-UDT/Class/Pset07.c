#include <stdio.h>
#include <string.h>

typedef struct Book {
    char title[50];
    char author[50];
    int year;
} Book;

int main() {
  Book book1;
  strcpy(book1.title, "Matilda");
  strcpy(book1.author, "Roald Dahl");
  book1.year = 1988;

  Book book2;
  strcpy(book2.title, "The Giving Tree");
  strcpy(book2.author, "Shel Silverstein");
  book2.year = 1964;

  printf("%s, %s, %d\n", book1.title, book1.author, book1.year);
  printf("%s, %s, %d\n", book2.title, book2.author, book2.year);
  return 0;
}