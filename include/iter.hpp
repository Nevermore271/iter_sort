#include <algorithm>
#include <iostream>


template <class Iterator>
void ItSort(Iterator begin, Iterator end)
{
	if (begin == end) return;
	for (Iterator i = begin; i != end; i++)
		for (Iterator j = i - 1; (j != begin) && (*(j - 1)<*(j)); j--)
		{
			std::iter_swap(j, j - 1);
		}
}