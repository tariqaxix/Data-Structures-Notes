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
  current->link = NULL;
  head->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 30;
  current->link = NULL;
  head->link->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 40;
  current->link = NULL;
  head->link->link->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  current->data = 50;
  current->link = NULL;
  head->link->link->link->link = current;

  // Delete a node at the specific location
  struct node *temp = head;
  struct node *prev = NULL;
  int pos;
  printf("Enter the position to delete: ");
  scanf("%d", &pos);
  int i = 1;
  while (pos > i)
  {
    prev = temp;
    temp = temp->link;
    i++;
  }
  prev->link = temp->link;
  free(temp);

  struct node *ptr = head;
  while (ptr != NULL)
  {
    printf("\n");
    printf("Data:%d", ptr->data);
    printf("\t\t\t");
    printf("Address:%d", ptr->link);
    ptr = ptr->link;
  }

  return 0;
}