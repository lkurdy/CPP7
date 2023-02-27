#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <string>

template<class T>
class   Array
{
	T	*a;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array	&operator=(const Array &other);
		T	operator[](int i);
		~Array();

		class	OOB : public std::exception
		{
			public:
				const char *exp() const throw();
		}

		size();
};

#endif
