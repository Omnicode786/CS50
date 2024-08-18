#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct node
{
       struct node *next;
        int number;
     
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number2 = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if (n== NULL)
        {
            free(n);
            return 1;
        }
        n->number = number2;       
        n->next = list;
        list = n;
    }
    node *ptr = list;
    while (list != NULL)
    {
        printf("%i\n",list->number);
        list = list->next;
    }   
}