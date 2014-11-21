#pragma once

template <class T> class Value{
    struct Node {
        T data;
        Node *prew;
        Node *next;
    };
public:
    int length;
    Value();
    Value(T element);
    ~value();
    void initial();
    void push(T data);
    T pop(); //Получить элемент и удалить его из списка
    T get(); //Получить элемент неудаляя его
    void delData(T data);
    void printValue();
    void clear();
    void isEmpty();
    void goNext();
    void goPrew();

private:
    Node *head;
    Node *curr;
};