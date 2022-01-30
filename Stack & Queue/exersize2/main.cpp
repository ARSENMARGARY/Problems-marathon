#include "implementation.hpp"


int main()
{
    Stack<int> s;
    s.push(15);
    s.push(5);
    s.push(1);
    s.push(125);
    s.push(6);
    s.push(8);
    std::cout << s.min() << std::endl;
    return 0;
}