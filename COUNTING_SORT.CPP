#include <iostream>
#include <vector>
#include <chrono>

template <typename t>
void print(t &x)
{
	for (auto i : x)
		std::cout << i << " ";
	std::cout << std::endl;
}

int main()
{
	auto start = std::chrono::high_resolution_clock::now();
	
	std::vector<int> a = {1, 4, 1, 2, 7, 5, 2};
	std::vector<int> b(10, 0);
	std::vector<int> c(a.size() + 1, 0);
	print(a);

	for (int i = 0; i < a.size(); i++)
		b[a[i]] += 1;

	// print(b);

	for (int i = 1; i < b.size(); i++)
		b[i] += b[i - 1];

	// print(b);

	for (int i = 0; i < a.size(); i++)
		c[b[a[i]]--] = a[i];
	c.erase(c.begin());
	// print(c);

	auto diff = std::chrono::high_resolution_clock::now() - start;
	auto t1 = std::chrono::duration_cast<std::chrono::microseconds>(diff);

	std::cout << t1.count() << std::endl;
}