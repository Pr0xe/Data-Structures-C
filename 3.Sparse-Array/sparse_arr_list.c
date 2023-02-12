/*
 * =====================================================================================
 *
 *       Filename:  sparse_arr_list.c
 *
 *    Description: Sparse matrix with linked list representation
 *
 *        Created:  02/12/2023 07:50:40 PM
 *       Compiler:  gcc
 *
 *         Author:  Alex Papadopoulos (ACP), csd4557@csd.uoc.gr
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

//Node to represent sparce matrix
struct Node {
	int value;
	int row_pos;
	int col_pos;
	struct Node *next;
};

void create_new_node(struct Node **start, int non_zero_element, int row_index,
		     int col_index)
{
	struct Node *temp, *r;
	temp = *start;
	if (temp == NULL) {
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->value = non_zero_element;
		temp->row_pos = row_index;
		temp->col_pos = col_index;
		temp->next = NULL;
		*start = temp;
	} else {
		while (temp->next != NULL)
			temp = temp->next;

		//Create node dinamically
		r = (struct Node *)malloc(sizeof(struct Node));
		r->value = non_zero_element;
		r->row_pos = row_index;
		r->col_pos = col_index;
		r->next = NULL;
		temp->next = r;
	}
}

//Print contents of linked list
//starting from start
void PrintList(struct Node *start)
{
	struct Node *temp, *r, *s;
	temp = r = s = start;

	printf("Row position : ");
	while (temp != NULL) {
		printf("%d ", temp->row_pos);
		temp = temp->next;
	}
	printf("\n");

	printf("Column position: ");
	while (r != NULL) {
		printf("%d ", r->col_pos);
		r = r->next;
	}
	printf("\n");

	printf("Value: ");
	while (s != NULL) {
		printf("%d ", s->value);
		s = s->next;
	}
	printf("\n");
}

int main(void)
{
	int matrix[4][5] = { { 0, 0, 3, 0, 4 },
			     { 0, 0, 5, 7, 0 },
			     { 0, 0, 0, 0, 0 },
			     { 0, 2, 6, 0, 0 } };

	struct Node *start = NULL;

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (matrix[i][j] != 0)
				create_new_node(&start, matrix[i][j], i, j);
	PrintList(start);

	return 0;
}
