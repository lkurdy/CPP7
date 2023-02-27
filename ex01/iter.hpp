#include <iostream>

template<typename T>
void	fct(T &el)
{
	el++;
}

template<typename T>
void	iter(T a[], int size, void (*fct)(T&))
{
	if (!a)
		return ;
	for (int i = 0; i < size; i++)
		fct(a[i]);
}
