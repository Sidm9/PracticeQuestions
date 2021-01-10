#include <iostream>

template <typename t>
void p(t x)
{
	cout << x << " ";
}

template <typename t, size_t n>
void printarray(t const (&x)[n])
{
	for (auto i : x)
		p(i);
	cout << endl;
}

int main() {
    int arr[] = {1, 2, 3};
    printarray(arr);
}