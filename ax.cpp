#include <iostream>

using namespace std;

void parti(int arr[], int l, int h)
{
	int piv = arr[h];
	int i = l - 1;

	for (int j = 0; j < h - 1; j++)
	{
		if (arr[j] <= piv)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[h]);
	return (i + 1);
}

void sort(int arr[], int l, int h)
{
	if (l < r)
	{
		int pi = parti(arr, l, h);
	}
}

int main()
{
	int arr[] = {10, 80, 30, 90, 40, 50, 70};

	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, 0, n - 1);

	return 0;
}
