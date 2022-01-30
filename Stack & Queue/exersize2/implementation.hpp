#include "prototype.h"

template <typename T>
Stack<T>::Stack()
{
	m_size = 30;
	m_vec.reserve(m_size);
	m_top = -1;
}

template <typename T>
Stack<T>::~Stack()
{
	m_size = 0;
	m_top = 0;
}

template <typename T>
void Stack<T>::push(const T& elem)
{
    if(m_size > 0)
	{
        m_vec.push_back(elem);
        
        if(m_min.size() == 0)
        {
            m_min.push_back(elem);
        }
        else if(elem < m_min[m_min.size() - 1])
        {
            m_min.push_back(elem);
        }
	}
	else
	{
		std::cout << "Stack overflow" << std::endl;
        std::exit(0);
	}    
}

template<typename T>
T Stack<T>::pop() const
{
    if(isEmpty())
    {
        std::cout << " Stack Underflow\n";
        exit(0);
    }

    T elem = m_vec[m_vec.size() - 1];
	m_vec.pop_back();

	if(elem == m_min[m_min.size() - 1])
	{
	    m_min.pop_back();
	}
	return elem;
}

template<typename T>
T Stack<T>::peek() const
{
   
    if(!isEmpty()) 
    {
        return m_vec[m_top];
    }
    else 
    {
        exit(0);
    }
}

template <typename T>
T Stack<T>::min() const
{
	return m_min[m_min.size() - 1];
}

template<typename T>
bool Stack<T>::isEmpty() const
{
    return m_top == -1;
}

template<typename T>
bool Stack<T>::isFull() const
{
    return m_top == m_size;
}