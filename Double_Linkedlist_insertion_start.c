#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};

int main()
{
  // create the head pointer for the linked list
  struct node *head = NULL;

  // add nodes to the linked list
  head = (struct node *)malloc(sizeof(struct node));
  head->data = 55;
  head->prev = NULL;
  head->next = NULL;

  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = 95;
  current->prev = head;
  current->next = NULL;
  head->next = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 3;
  current->prev = head->next;
  current->next = NULL;
  head->next->next = current;

  // Insertion at the beginning
  struct node *start = NULL;
  start = (struct node *)malloc(sizeof(struct node));
  start->data = 99;
  start->prev = NULL;
  start->next = head;
  head->prev = start;

  // traverse the linked list forwards and print the data in each node
  current = start;
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");

  // traverse the linked list backwards and print the data in each node
  current = head->next->next;
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->prev;
  }
  printf("\n");

  return 0;
}