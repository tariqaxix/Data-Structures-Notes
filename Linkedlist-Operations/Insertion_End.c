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
  head->data = 42;
  head->link = NULL;

  struct node *current = NULL;
  current = (struct node *)malloc(sizeof(struct node));
  current->data = 98;
  current->link = NULL;
  head->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 3;
  current->link = NULL;

  head->link->link = current;

  // Insert a new node at the end of the link list

  struct node *newnode = NULL;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = 67;
  newnode->link = NULL;
  struct node *temp = head;
  while (temp->link != NULL)
  {
    temp = temp->link;
  }
  temp->link = newnode;
  // Print the values with their addresses
  struct node *ptr = NULL;
  ptr = head;
  while (ptr->link != NULL)
  {
    printf("\n");
    printf("%d", ptr->data);
    printf("\t");
    printf("%d", ptr->link);
    ptr = ptr->link;
  }
  ptr->link = temp;
  printf("\n");
  printf("%d", ptr->data);
  printf("\t");
  printf("%d", ptr->link);
}