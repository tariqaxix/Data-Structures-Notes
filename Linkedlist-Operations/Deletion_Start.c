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
  head->data = 10;
  head->link = NULL;

  struct node *current = NULL;
  current = (struct node *)malloc(sizeof(struct node));
  current->data = 20;
  head->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 30;
  current->link = NULL;
  head->link->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 40;
  current->link = NULL;
  head->link->link->link = current;

  // Print the Values of the Link List
  struct node *ptr = NULL;
  ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = 50;
  ptr->link = NULL;

  // Deleting the first node
  struct node *temp = head;
  head = head->link;
  free(temp);

  current = head;
  while (current->link != NULL)
  {
    current = current->link;
  }
  current->link = ptr;

  printf("After deleting the first node\n");
  ptr = head;
  while (ptr != NULL)
  {
    printf("Data:%d,    Address:%p\n", ptr->data, ptr);
    ptr = ptr->link;
  }
  printf("\n");
}
