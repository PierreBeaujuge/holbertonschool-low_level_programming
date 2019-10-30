#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int **array, int idx1, int idx2);
void swap_nodes(listint_t *node);

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
void quick_sort_recurs(int *array, size_t size, size_t startIdx,
		       size_t endIdx);
int partition(int *array, size_t size, size_t startIdx, size_t endIdx);

void shell_sort(int *array, size_t size);

void cocktail_sort_list(listint_t **list);
int way_forward(listint_t **list, listint_t **temp, int flag);
int way_backward(listint_t **list, listint_t **temp, int flag);

void counting_sort(int *array, size_t size);
int max_arr(int *array, size_t size);

void merge_sort(int *array, size_t size);
void split_array(int *array, int *buf, size_t startIdx, size_t endIx);
void merge_array(int *array, int *buf, size_t startIdx, size_t endIx);

void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size);
void siftDown(int *array, size_t size, size_t startIdx, size_t endIdx);

void radix_sort(int *array, size_t size);
void count_sort(int *array, int size, int diviser);

void bitonic_sort(int *array, size_t size);
void bitonic_sort_recurs(int *array, size_t size, size_t startIdx,
			 size_t count, int dir);
void bitonic_merge(int *array, size_t startIdx, size_t count, int dir);
void bitonic_compare(int *array, int idx1, int idx2, size_t dir);

void quick_sort_hoare(int *array, size_t size);

#endif
