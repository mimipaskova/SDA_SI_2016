#include <iostream>

using namespace std;

typedef int DataType;

struct Element {
    DataType data;
    Element *prev, *next;
    Element(const DataType& value) {
        data = value;
        prev = next = NULL;
    }
};

struct List {
    int size;
    Element *head, *tail;
};

void init(List& list) {
    list.size = 0;
    list.head = list.tail = NULL;
}

int size(List& list) {
    return list.size;
}

bool empty(List& list) {
    return !list.size;
}

DataType& front(List& list) {
    if(list.size > 0)
    return list.head->data;
}

DataType& back(List& list) {
    if(list.size > 0)
    return list.tail->data;

}

DataType& at(List& list, int index) {
    if((index >= 0 && index < list.size))
    {
        Element* link = list.head;
        for (int i = 0; i < index; i++)
            link = link->next;
        return link->data;
    }
}

void push_front(List& list, const DataType& value) {
    Element* element = new Element(value);
    element->next = list.head;
    if (list.size == 0)
        list.head = list.tail = element;
    else
        list.head = list.head->prev = element;
    list.size++;
}

void push_back(List& list, const DataType& value) {
    Element* element = new Element(value);
    element->prev = list.tail;
    if (list.size == 0)
        list.head = list.tail = element;
    else
        list.tail = list.tail->next = element;
    list.size++;
}

void insert(List& list, int index, const DataType& value) {
    if (index <= 0) {
        push_front(list, value);
    }
    else if (index >= list.size) {
        push_back(list, value);
    }
    else {
        Element* link = list.head;
        for (int i = 0; i < index - 1; i++)
            link = link->next;
        Element* element = new Element(value);
        element->prev = link;
        element->next = link->next;
        element->prev->next = element;
        element->next->prev = element;
        list.size++;
    }
}

void pop_front(List& list) {
    if (list.size == 0)
        return;
    if (list.size == 1) {
        delete list.head;
        list.head = list.tail = NULL;
    }
    else {
      Element* link = list.head;
      list.head = link->next;
      list.head->prev = NULL;
      delete link;
    }
    list.size--;
}

void pop_back(List& list) {
    if (list.size == 0)
        return;
    if (list.size == 1) {
        delete list.head;
        list.head = list.tail = NULL;
    }
    else {
        Element* link = list.tail;
        list.tail = link->prev;
        list.tail->next = NULL;
        delete link;
    }
    list.size--;
}


int main()
{

    List <int> list1;
    assert(list1.empty());
    assert(list1.size() == 0);

    List <Person> list2;
    assert(list2.empty());
    assert(list2.size() == 0);

    List <double> list3(3, 42.0);
    assert(!list3.empty());
    assert(list3.size() == 3);
    cout << "Hello world!" << endl;
    return 0;
}
