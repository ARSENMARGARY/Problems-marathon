#include <iostream>
#include <vector>

template <typename T>

class Stack
{
public:
    Stack();
    ~Stack();

public: 
    void push(const T&,int);
    T pop(int);
    T peek(int);
    bool isEmpty(int) const;
    bool isFull(int) const;
    
private:
    int m_top1{};
    int m_top2{};
    int m_top3{};
    int m_array_size{};
    int m_size1{};
    int m_size2{};
    int m_size3{};
    std::vector<T> m_vec;
};
