#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template<class T>
class Array
{
	T	*a;
	int	s;

	public:
		Array() : a(new T[0]), s(0){}
		Array(unsigned int n)
		{
			int	t = static_cast<int>(n);
			if (t < 0)
				n = 0;
			this->a = new T[n];
			this->s = n;
		}

		Array(const Array<T> &other)
		{
			*this = other;
		}

		Array<T>	&operator=(const Array<T> &other)
		{
			this->s = other.s;
			this->a = new T[this->s];
			for (int i = 0; i < this->s; i++)
				this->a[i] = other.a[i];
			return (*this);
		}

		~Array(void)
		{
			delete []a;
		}

		T		&operator[](const int i)
		{
			if (i < 0 || i >= this->s)
				throw OOB();
			return (this->a[i]);
		}

		int		size()
		{
			return (this->s);
		}

		class OOB : public std::exception
		{
			public:
				const char	*exp() const throw()
				{
					return ("Out of bounds");
				} 
		};
};

#endif
