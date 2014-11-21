#include "template.h"

template <class T> Value<T>::Value():{
    head = NULL;
    curr = NULL;
    length = 0;
}

template <class T> Value<T>::Value(element):{
        head = NULL;
        curr = NULL;
        length = 0;
        push(element);
}

template <class T> Value<T>::~Value():{
    clear();
}

template <class T> void Value<T>::push(T data) {
}

