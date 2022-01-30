#include <iostream>
#include <stack>


template <typename T>
class MyQueue
{
public:
	void push(const T&);
	T pop() const;
private:
	std::stack<T> stack1;
	std::stack<T> stack2;
};