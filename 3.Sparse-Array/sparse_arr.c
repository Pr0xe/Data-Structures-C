/*
 * =====================================================================================
 *
 *       Filename:  2darr.c
 *
 *    Description: Sparse Matrix representation
 *
 *        Created:  02/12/2023 07:12:37 PM
 *       Compiler:  gcc
 *
 *         Author:  Alex Papadopoulos (ACP), csd4557@csd.uoc.gr
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void)
{
	//Assume 4x5 matrix
	int matrix[4][5] = { { 0, 0, 3, 0, 4 },
			     { 0, 0, 5, 7, 0 },
			     { 0, 0, 0, 0, 0 },
			     { 0, 2, 6, 0, 0 } };

	int size = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (matrix[i][j] != 0)
				size++;
	//defining final matrix
	int sparse_arr[3][size];

	//making final matrix
	int k = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (matrix[i][j] != 0) {
				sparse_arr[0][k] = i;
				sparse_arr[1][k] = j;
				sparse_arr[2][k] = matrix[i][j];
				k++;
			}
	//displaying final matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < size; j++)
			printf("%d", sparse_arr[i][j]);
		printf("\n");
	}
	return 0;
}
