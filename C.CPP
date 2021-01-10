#include <iostream>
using namespace std;
#define deb(x) cout << x



template <typename t, size_t n>
{
	void printarray(t const(&x)[n])
	{
		for (auto i : x)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	int arr[] = {1, 2, 3};

	return 0;
}