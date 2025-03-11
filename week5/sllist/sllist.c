#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct slnode
{
  char* phrase;
  int id;
  struct slnode* next;
} slnode;

slnode* create(slnode* list, char* phrase, int id);
void print_list(slnode* list);
void free_list(slnode* list);
void destroy(slnode* list, int id);

int main(void)
{
  slnode* list = malloc(sizeof(slnode));
  if (list == NULL) return 1;
  list->phrase = "Hello!";
  list->id = 0;
  list->next = NULL;
  for (int i = 0; i < 3; i++)
  {
    string s = get_string("Enter a phrase: ");
    slnode* node = create(list, s, i+1);
    list = node;
  }
  print_list(list);
  bool finish = false;
  while (!finish)
  { 
    int d = get_int("Enter id to destroy: ");
    if (d) {
      destroy(list, d);
    }
    else
    {
      break;
    }
    printf("new list :\n");
    print_list(list);
  }
  free_list(list);
  return 0;
}

slnode* create(slnode* list, char* phrase, int id)
{
  slnode* new_node = malloc(sizeof(slnode));
  if (new_node == NULL) return NULL;
  new_node->phrase = phrase;
  new_node->id = id;
  new_node->next = list;
  return new_node;
}

void print_list(slnode* list)
{
  for(slnode* ptr = list; ptr != NULL; ptr = ptr->next)
  {
    printf("address: %p\n",ptr);
    printf("phrase: %s\n",ptr->phrase);
    printf("next: %p\n",ptr->next);
  }
}

void free_list(slnode* list)
{
  slnode* ptr = list;
  while (ptr != NULL)
  {
    list = list->next;
    free(ptr);
    ptr = list;
  }
}

void destroy(slnode* list, int id)
{
  // TODO: Search id in list
  for (slnode* ptr = list; ptr != NULL; ptr = ptr->next)
  {
    if (id == ptr->id)
    {

    }
  }
  // TODO: When found, isolate it in a new variable
  // TODO: link node before id and node after
  // TODO: free isolated node
  // TODO: If id didn't found, print "didn't found id"
}