/*
 * =====================================================================================
 *
 *       Filename:  deletion_op.c
 *
 *    Description: Delete items from an array
 *
 *        Created:  02/12/2023 12:20:13 PM
 *       Compiler:  gcc
 *
 *         Author:  Alex Papadopoulos (ACP), csd4557@csd.uoc.gr
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int k = 3, n = 5;
	int i, j;
	printf("Original array:\n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	j = k;
	//moving items to the left while j<n
	while (j < n) {
		arr[j - 1] = arr[j];
		j += 1;
	}
	//make room minus 1 to print out correctly
	n -= 1;
	printf("Array after deletion:\n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
