#include <string.h>
#include "template.h"

template <class T> Value<T>::Value():{
    head = NULL;
    curr = NULL;
}

template <class T> Value<T>::Value(T element):{
    head = NULL;
    curr = NULL;
    addToHead(element);
}

template <class T> Value<T>::~Value():{
    //clear();
}

template <class T> void Value<T>::setBeginning() {
    pCurr = pHead;
}


template <class T> void Value<T>::addToHead(T data) {
    if (pHead == NUll) {
        pHead = new Node;
        pHead->data = data;
        pHead->next = NULL;
        pHead->prew = NULL;
        return;
    }

    //pCurr = pHead;

    Node *pNewNode = new Node;
    pNewNode->data = data;
    pNewNode->prew = pHead->prew;
    pNewNode->next = pHead;
    pHead->prew = pNewNode;
    pHead = pNewNode;

}

