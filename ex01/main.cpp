#include "iter.hpp"

int	main()
{
//	char	a[] = "Hello";
	int	a[5] = {1, 2, 3, 4, 5};


	iter(a, 5, fct);
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << std::endl;
	return (0);
}
