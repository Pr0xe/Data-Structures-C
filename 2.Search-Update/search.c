/*
 * =====================================================================================
 *
 *       Filename:  search.c
 *
 *    Description: Search items in array
 *
 *        Created:  02/12/2023 12:39:58 PM
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
	int item = 5, n = 5, j = 0;
	printf("Original array elements:\n");
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	while (j < n) {
		//searching for @item value in array
		if (arr[j] == item) {
			break;
		}
		j += 1;
	}
	printf("Found item %d at position %d\n", item, j + 1);
}
