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

  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = 20;
  current->link = NULL;
  head->link = current;

  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = 30;
  new_node->link = NULL;
  current->link = new_node;

  struct node *end_node = (struct node *)malloc(sizeof(struct node));
  end_node->data = 40;
  end_node->link = NULL;
  struct node *temp = head;
  while (temp->link != NULL)
  {
    temp = temp->link;
  }
  temp->link = end_node;

  struct node *ptr = head;
  // Removing last node
  struct node *prev = NULL;
  ptr = head;
  while (ptr->link != NULL)
  {
    prev = ptr;
    ptr = ptr->link;
  }
  prev->link = NULL;
  free(ptr);

  printf("\nLinked list after removing the last node:\n");
  ptr = head;
  while (ptr != NULL)
  {
    printf("Data: %d    Address: %p\n", ptr->data, ptr);
    ptr = ptr->link;
  }

  return 0;
}
