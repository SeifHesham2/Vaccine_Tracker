#include "WaitingList.h"
#include<iostream>
#include <assert.h>
template <class T>
WaitingList<T>::WaitingList()
{
    size = 2;
    count = 0;
    front = back = -1;
    arr = new T[size];
}


template <class T>
void WaitingList<T>::enqueue(T value)
{
    if (count == size) {
        expand();
    }
    if (count == 0) {
        front = 0;
    }
    back = (back + 1) % size;
    arr[back] = value;
    count++;
}


template <class T>
void WaitingList<T>::dequeue()
{
    assert(!empty());
    if (count == 1)
        front = back = -1;
    else
        front = (front + 1) % size;
    count--;
}


template <class T>
bool WaitingList<T>::empty()
{
    return (count == 0);
}



template <class T>
void WaitingList<T>::expand()
{
    T* newarr = new T[size * 2];
    for (int i = 0; i < count; i++) {
        newarr[i] = arr[i];
    }
    size = size * 2;
    delete arr;
    arr = newarr;

}

template <class T>
int WaitingList<T>::sizez() {
    return count;

}


template <class T>
WaitingList<T>::~WaitingList(void)
{
    delete[]arr;
}

