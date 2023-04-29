#include "Array.hpp"

int	main()
{
	Array<double> array(3);

	try
	{
		array[0] = 42.9;
		array[1] = 3.3;
		std::cout << array[0] << std::endl;
		std::cout << array[1] << std::endl;
	}
	catch (Array<double>::OOB &error)
	{
		std::cout << error.exp() << std::endl;
	}
}
