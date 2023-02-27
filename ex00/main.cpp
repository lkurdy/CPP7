#include <iostream>
#include "whatever.hpp"

int	main()
{
	int	a = 1;
	int	b = 42;
	std::string	c = "str1";
	std::string	d = "str2";

	::swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a,b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a,b) << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c,d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c,d) << std::endl;
	return (0);
}
