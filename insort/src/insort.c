int *insort(int arr[], int size)
{
	int i, key, j;

	for (i = 1; i < size; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && key < arr[j]) {
			arr[j + 1] = arr[j];
			j -= 1;
		}

		arr[j + 1] = key;
	}
	return arr;
}

int *reinsort(int arr[], int size)
{
	int i, key, j;

	for (i = 1; i < size; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && key > arr[j]) {
			arr[j + 1] = arr[j];
			j -= 1;
		}

		arr[j + 1] = key;
	}
	return arr;
}
