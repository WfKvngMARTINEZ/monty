#include "monty.h"

/**
 * addqueue - add node to the end of the stack (queue)
 * @head: head of the stack
 * @n: new_value
 * Return: no return
 */
void addqueue(stack_t **head, int n)
{
    stack_t *new_node, *last;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
        return;
    }

    last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
}

