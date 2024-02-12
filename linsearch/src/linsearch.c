int linsearch(int arr[], int n)
{
	for (int i; arr[i] != '\0'; i++) {
		if (arr[i] == n) {
			return i;
		}
	}
	return -1;
}
