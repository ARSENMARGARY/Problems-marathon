#include <iostream>
#include <vector>

template <typename T>

class Stack
{
public:
    Stack();
    ~Stack();

public: 
    void push(const T&);
    T pop() const;
    T peek() const;
    T min() const;
    bool isEmpty() const;
    bool isFull() const;
    
private:
    int m_top{};
    int m_size{};
    std::vector<T> m_vec;
    std::vector<T> m_min;
};


