#include<iostream>

class B
{
private:
    /* data */
    int val;
public:
    B(int v);
    ~B();
};

B::B(int v):val(v)
{
}

B::~B()
{
}

class A
{
private:
    /* data */
    B b;
public:
};

int main() {
    A a = new A();
}




