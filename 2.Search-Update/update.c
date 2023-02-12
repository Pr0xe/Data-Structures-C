/*
 * =====================================================================================
 *
 *       Filename:  update.c
 *
 *    Description: Update operation - update an existing item in array
 *
 *        Created:  02/12/2023 07:04:20 PM
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
	int k = 3, n = 5, item = 10;

	printf("Original array:\n");
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	//replacing arr[k-1] with item value
	arr[k - 1] = item;

	printf("Updated array:\n");
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
