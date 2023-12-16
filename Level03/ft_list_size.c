
// #ifndef FT_LIST_H
// # define FT_LIST_H

# include <stddef.h> // NULL || (void *)0

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

// #endif

// #include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

//     #include <stddef.h>: Включает заголовочный файл stddef.h, который определяет стандартные макросы, 
//     такие как NULL и тип size_t. Здесь используется для определения NULL (или (void *)0), 
//     представляющего нулевой указатель.

//     typedef struct s_list: Объявляет структуру данных с именем s_list с использованием typedef. 
//     Структура содержит два поля: указатель на следующий элемент списка next и указатель 
//     на данные элемента списка data.

//     {: Начало блока структуры. Все поля структуры будут определены внутри этого блока.

//     struct s_list *next;: Определяет поле next структуры, которое представляет собой указатель 
//     на следующий элемент связанного списка.

//     void *data;: Определяет поле data структуры, которое представляет собой указатель на данные, 
//     хранящиеся в текущем элементе списка. Тип void * позволяет хранить указатель на данные любого типа.

//     };: Закрывает блок структуры.

// Таким образом, данная структура t_list представляет собой узел связанного списка, 
// где каждый узел содержит указатель на следующий элемент и указатель на данные. 
// Связанные списки широко используются в программировании для организации данных последовательно, 
// где каждый элемент связан с предыдущим и следующим элементом в списке.

// Assignment name  : ft_list_size
// Expected files   : ft_list_size.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;
