#include "insort.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int arr[] = { 5, 2, 4, 6, 3 };
	int size = (int)sizeof(arr) / sizeof(arr[0]);
	int *sorted = insort(arr, size);

	for (int i; i < size; i++) {
		printf("%d\n", sorted[i]);
	}
	printf("\nreinsort:\n");
	int *resorted = reinsort(arr, size);
	for (int i; i < size; i++) {
		printf("%d\n", resorted[i]);
	}

}
