#include "linsearch.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int arr[] = { 12, 51, 53, 12, 32, 44, 55 };
	int i = linsearch(arr, 121);
	printf("%d\n", arr[i]);
}
