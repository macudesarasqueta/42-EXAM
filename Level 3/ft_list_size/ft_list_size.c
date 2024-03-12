#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	len = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		len++;
	}
	return (len);
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creamos algunos nodos de lista manualmente para el ejemplo
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    // Asignamos datos ficticios a los nodos
    node1->data = "Datos del nodo 1";
    node2->data = "Datos del nodo 2";
    node3->data = "Datos del nodo 3";

    // Conectamos los nodos en una lista enlazada
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL; // El último nodo debe apuntar a NULL

    // Calculamos el tamaño de la lista utilizando la función ft_list_size
    int size = ft_list_size(node1);

    // Imprimimos el tamaño de la lista
    printf("El tamaño de la lista es: %d\n", size);

    // Liberamos la memoria asignada a los nodos
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
