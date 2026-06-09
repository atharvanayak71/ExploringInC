// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    float price;
    int year;
};

void displayBook(struct Book b) {
    printf("Title: %s | Author: %s | Price: %.2f | Year: %d\n", b.title, b.author, b.price, b.year);
}

int main() {
    struct Book books[3] = {
        {"C Programming", "Dennis Ritchie", 450.00, 1972},
        {"Data Structures", "Yedidyah Langsam", 520.00, 1990},
        {"Algorithms", "Thomas Cormen", 680.00, 2001}
    };
    printf("Book List:\n");
    for (int i = 0; i < 3; i++) displayBook(books[i]);
    return 0;
}
