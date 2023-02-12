/*
 * =====================================================================================
 *
 *       Filename:  insertion_op.c
 *
 *    Description: Insertion operation - insert one or more data into an array
 *
 *        Created:  02/12/2023 12:00:02 PM
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
	int item = 10, k = 3, n = 5;
	int i = 0, j = n;
	printf("Original array:\n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	//increase space by one to insert new item
	n = n + 1;
	//Shifting all items to the right from the value k and rest
	while (j >= k) {
		arr[j + 1] = arr[j];
		j = j - 1;
	}
	arr[k] = item;
	printf("Array after insert:\n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

