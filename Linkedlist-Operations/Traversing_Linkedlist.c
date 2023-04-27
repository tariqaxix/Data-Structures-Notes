#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
};

int main()
{

  struct node *head = NULL;
  head = (struct node *)malloc(sizeof(struct node));
  head->data = 55;
  head->link = NULL;

  struct node *current = NULL;
  current = (struct node *)malloc(sizeof(struct node));
  current->data = 95;
  head->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 3;
  head->link->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 9;
  head->link->link->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 34;
  head->link->link->link->link = current;

  // Print the Values of the Link List

  if (head == NULL)
    printf("Linked List is empty");
  struct node *ptr = NULL;
  ptr = head;
  while (ptr != NULL)
  {
    printf("\n");
    printf("%d", ptr->data);
    // printf("\n");
    ptr = ptr->link;
    // printf("%d", ptr);
  }
}