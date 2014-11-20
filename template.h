#include <iostream>

template <class T>
    class Value{
    public:
        Value(int size = 10);
        Value(const Value &rhs);

    private:
        T *pValue;
        int size;
};