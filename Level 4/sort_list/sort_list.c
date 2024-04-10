#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

/*int ascending(int a, int b) {
    return (a <= b);
}

#include <stdio.h>
#include <stdlib.h>

// Función para imprimir la lista
void	print_list(t_list *lst)
{
    while (lst != NULL)
	{
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main() {
    // Crear una lista de ejemplo
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node4 = malloc(sizeof(t_list));

    node1->data = 3;
    node1->next = node2;

    node2->data = 1;
    node2->next = node3;

    node3->data = 4;
    node3->next = node4;

    node4->data = 2;
    node4->next = NULL;

    // Imprimir la lista original
    printf("Lista original: ");
    print_list(node1);

    // Ordenar la lista usando sort_list
    t_list *sorted_list = sort_list(node1, ascending);

    // Imprimir la lista ordenada
    printf("Lista ordenada: ");
    print_list(sorted_list);

    // Liberar memoria
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return (0);
}*/
