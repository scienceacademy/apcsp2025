#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *create_node(int data);
node *insert_front(node *list, int data);
void print_list(node *list);
void free_list(node *list);
node *reverse_list(node *list);

int main(void)
{
    node *list = NULL;
    list = insert_front(list, 5);
    list = insert_front(list, 1);
    list = insert_front(list, 4);
    list = insert_front(list, 3);
    list = insert_front(list, 2);
    list = insert_front(list, 8);

    print_list(list);

    printf("Reversing list...\n");
    list = reverse_list(list);
    print_list(list);

    free_list(list);
}

node *create_node(int data)
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

node *insert_front(node *list, int data)
{
    node *new_node = create_node(data);
    new_node->next = list;
    return new_node;
}

void print_list(node *list)
{
    node *current = list;
    printf("List: ");
    while (current != NULL)
    {
        printf("%i -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void free_list(node *list)
{
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}

node *reverse_list(node *list)
{
    // TODO
    // Reverse the linked list in place.
    // Return the new head of the reversed list.
    return list; // placeholder return
}
