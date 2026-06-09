// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

struct HashNode {
    int key;
    char value[50];
    struct HashNode *next;
};

struct HashNode *table[TABLE_SIZE];

int hash(int key) { return key % TABLE_SIZE; }

void insert(int key, char *value) {
    int idx = hash(key);
    struct HashNode *node = (struct HashNode *)malloc(sizeof(struct HashNode));
    node->key = key;
    strcpy(node->value, value);
    node->next = table[idx];
    table[idx] = node;
}

char *search(int key) {
    int idx = hash(key);
    struct HashNode *cur = table[idx];
    while (cur) {
        if (cur->key == key) return cur->value;
        cur = cur->next;
    }
    return NULL;
}

int main() {
    for (int i = 0; i < TABLE_SIZE; i++) table[i] = NULL;
    insert(1, "Atharva");
    insert(11, "Nayak");
    insert(2, "Computer");
    insert(22, "Science");
    int keys[] = {1, 11, 2, 22, 99};
    for (int i = 0; i < 5; i++) {
        char *val = search(keys[i]);
        if (val) printf("Key %d -> %s\n", keys[i], val);
        else printf("Key %d -> Not found\n", keys[i]);
    }
    return 0;
}
