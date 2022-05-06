#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    struct Node *next;
    int data;
};

struct Node *head = NULL;
struct Node *tail = NULL;
int size = 0;

void addFirst(int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    size++;
}

void addLast(int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (size == 0)
        addFirst(data);
    else
    {
        tail->next = newNode;
        tail = newNode;
        size++;
    }
}

void deleteFirst()
{
    struct Node *temp = head;
    head = head->next;
    temp = NULL;

    free(temp);
    size--;
}

void printAll()
{
    struct Node *current = head;

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", current->data);
        current = current->next;
    }
}

void reverse()
{
    struct Node *current = head;
    struct Node *prev = NULL;
    tail = head;
    int count = 0;

    while (count < size)
    {
        prev = current;
        current = current->next;
        current->next = prev;
        count++;
    }
    head = current;
}

void printSize()
{
    printf("%d\n", size);
}

bool isEmpty()
{
    return size == 0;
}

int main()
{
    addFirst(11);
    addFirst(22);
    addFirst(33);
    printf("%d", isEmpty());
}