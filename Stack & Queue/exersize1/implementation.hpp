#include "prototype.h"

template <typename T>
Stack<T>::Stack()
{
	m_array_size = 90;
	m_vec.reserve(m_array_size);
	m_size1 = (m_array_size / 3);
	m_size2 = ((m_array_size * 2) / 3);
    m_size3 = (m_array_size);
	m_top1 = -1;
	m_top2 = m_array_size / 3 - 1;
	m_top3 = (m_array_size * 2) / 3 - 1;
}

template <typename T>
Stack<T>::~Stack()
{
    m_array_size = 0;
	m_size1 = 0;
	m_size2 = 0;
    m_size3 = 0;
	m_top1 = 0;
	m_top2 = 0;
	m_top3 = 0;
}

template <typename T>
void Stack<T>::push(const T& elem,int stack_number)
{
    if(stack_number == 1)
    {
        if (m_size1 > 0)
	    {
		    m_vec[++m_top1] = elem;
		    m_size1--;
	    }
	    else
	    {
		    std::cout << "Stack overflow" << std::endl;
            std::exit(0);
	    } 
    }

    if(stack_number == 2)
    {
        if (m_size2 > m_array_size / 3)
	    {
		    m_vec[++m_top2] = elem;
		    m_size2--;
	    }
	    else
	    {
		    std::cout << "Stack overflow" << std::endl;
            std::exit(0);
	    } 
    }

    if(stack_number == 3)
    {
        if (m_size1 > (m_array_size * 2) / 3)
	    {
		    m_vec[++m_top3] = elem;
		    m_size3--;
	    }
	    else
	    {
		    std::cout << "Stack overflow\n" << std::endl;
            std::exit(0);
	    } 
    }
}

template<typename T>
T Stack<T>::pop(int stack_number)
{
    if(stack_number == 1)
    {
        if (isEmpty(stack_number))
        {
            std::cout << " Stack Underflow\n";
            exit(0);
        }
        std::cout << "Removing " << peek(stack_number) << std::endl;
        return m_vec[m_top1--];  
    }
    
    if(stack_number == 2)
    {
        if (isEmpty(stack_number))
        {
            std::cout << " Stack Underflow\n";
            exit(0);
        }
        std::cout << "Removing " << peek(stack_number) << std::endl;
        return m_vec[m_top2--];  
    }

    if(stack_number == 3)
    {
        if (isEmpty(stack_number))
        {
            std::cout << " Stack Underflow\n";
            exit(0);
        }
        std::cout << "Removing " << peek(stack_number) << std::endl;
        return m_vec[m_top3--];  
    }
}

template<typename T>
T Stack<T>::peek(int stack_number)
{
    if(stack_number == 1)
    {
        if (!isEmpty(stack_number)) 
        {
            return m_vec[m_top1];
        }
        else 
        {
            exit(0);
        }  
    }

    if(stack_number == 2)
    {
        if (!isEmpty(stack_number)) 
        {
            return m_vec[m_top2];
        }
        else 
        {
            exit(0);
        }  
    }

    if(stack_number == 3)
    {
        if (!isEmpty(stack_number)) 
        {
            return m_vec[m_top3];
        }
        else 
        {
            exit(0);
        }  
    } 
}

template<typename T>
bool Stack<T>::isEmpty(int stack_number) const
{
    if(stack_number == 1)
    {
        return m_top1 == -1;
    }

    if(stack_number == 2)
    {
        return m_top2 == m_array_size / 3 - 1;
    }

    if(stack_number == 3)
    {
        return m_top3 == (m_array_size * 2) / 3 - 1;
    }
}

template<typename T>
bool Stack<T>::isFull(int stack_number) const
{
    if(stack_number == 1)
    {
        return m_top1 == m_size1 - 1;
    }

    if(stack_number == 2)
    {
       return m_top2 == m_size2 - 1;
    }

    if(stack_number == 3)
    {
        return m_top3 == m_size3 - 1;
    }
}
