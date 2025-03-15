// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *dico = fopen(dictionary, "r");
    if (dico == NULL)
    {
        printf("Could not open dictionary!\n");
        return false;
    }

    char* scanned_word = NULL;
    while (fscanf(dico, "%s", scanned_word) != EOF)
    {
        node* new_word = malloc(sizeof(node));
        if (new_word == NULL)
        {
            printf("Error when loading. No more memory available.\n");
            return false;
        }
        // strcpy(scanned_word, new_word->word);
        // before : head -> last_word -> other_word
        // int hindex = hash(new_word->word);
        // new_word->next = table[hindex]->next;
        //here : head -> last_word <- new_word
        //                     |
        //                     V
        //                 other_word
        // table[hindex]->next = new_word;
        // and : head -> new_word -> last_word -> other_word
    }

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
