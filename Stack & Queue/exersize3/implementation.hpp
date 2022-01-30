#include "prototype.h"

template <typename T>
void MyQueue<T>::push(const T& elem)
{
	while(!stack1.empty()) 
    {
    	stack2.push(stack1.top());
        stack1.pop();
    }
    stack1.push(value);

    while(!stack2.empty()) 
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
}

template <typename T>
T MyQueue<T>::pop() const
{
	if (stack1.empty())
	{
    	std::cout << "Queue is Empty\n";
        exit(0);
    }

    int x = stack1.top();
    stack1.pop();
    return x;
}