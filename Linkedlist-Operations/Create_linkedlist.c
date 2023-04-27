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
  current->link = NULL;

  head->link->link = current;

  printf("%d", head->data);
  printf("\n");
  printf("%d", current->data);
}