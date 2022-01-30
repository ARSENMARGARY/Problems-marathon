#include "prototype.h"
template <typename T>
void SortedStack<T>::push(const T& elem)
{
	if (sorted.empty())
	{
		sorted.push(elem);
	}
	else if (elem < sorted.top())
	{
		sorted.push(elem);
	}
	else
	{
		std::stack<T> tmp;
		while ((!sorted.empty()) and (elem >= sorted.top()))
		{
			tmp.push(sorted.top());
			sorted.pop();
		}
		tmp.push(elem);
		while (!tmp.empty())
		{
			sorted.push(tmp.top());
			tmp.pop();
		}
	}
}

template <typename T>
void SortedStack<T>::pop()
{
	sorted.pop();
}

template <typename T>
T SortedStack<T>::peek() const
{
	return sorted.top();
}

template <typename T>
bool SortedStack<T>::is_empty() const
{
	return sorted.empty() ? true : false;
}