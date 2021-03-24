# Шпаргалка для абстрактных типов данных

Типы:

1. Стек
2. Дек.
3. Очередь.

## Стек

Стек - абстрактный тип данных, представляющий собой список элементов, организованных по принципу LIFO (last-in-first-out).

Реализация на языке С++

```C++
struct data {

  std::string name;
  int old;
};
```
```C++
struct stackObject {

  data data;
  stackObject* next;
};
```
```C++
class Stack {

public:

  Stack() {

    head = nullptr;
  }

  void Push(data newData) {

    stackObject* ptr = new stackObject;
    ptr->data = newData;

    std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

    if (head == nullptr) {

      head = ptr;
      head->next = nullptr;
    }
    else {

      ptr->next = head;
      head = ptr;
    }
  }

  void Show() {

    stackObject* ptr = head;

    while (ptr != nullptr) {

      std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
      ptr = ptr->next;
    }

  std::cout << std::endl;
  }

  void Pop() {

    if (head == nullptr) {

      return;
    }

    if (head->next == nullptr) {

      std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

      delete head;
      head = nullptr;
    }
    else {

      stackObject* ptr = head;

      std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

      head = head->next;

      delete ptr;
    }
  }

  void Delete() {

    while (head != nullptr) {

      this->Pop();
    }

    std::cout << std::endl;
  }

private:

  stackObject* head;

};
```
## Дек

Двусвязная очередь - абстрактный тип данных, в котором элементы можно добавлять и удалять как в начало, так и в конец.

Реализация на языке С++

```C++
struct data {

  std::string name;
  int old;
};
```
```C++
struct deqObject {

  data data;
  deqObject* prev;
  deqObject* next;
};
```
```C++
class Deq {

public:

  Deq() {

    head = nullptr;
    tail = nullptr;
  }

 void PushFront(data newData) {

    deqObject* ptr = new deqObject;
    ptr->data = newData;

    std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

    if (head == nullptr) {

      ptr->prev = nullptr;
      ptr->next = nullptr;

      head = ptr;
      tail = ptr;
    }
    else {

      ptr->prev = nullptr;
      ptr->next = head;

      head->prev = ptr;
      head = ptr;
    }
  }
  void PushBack(data newData) {

    deqObject* ptr = new deqObject;
    ptr->data = newData;

    std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

    if (head == nullptr) {

      ptr->prev = nullptr;
      ptr->next = nullptr;

      head = ptr;
      tail = ptr;
    }
    else {

      ptr->prev = tail;
      ptr->next = nullptr;

      tail->next = ptr;
      tail = ptr;
    }
  }

  void Show() {

    deqObject* ptr = head;

    while (ptr != nullptr) {

      std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
      ptr = ptr->next;
    }

    std::cout << std::endl;
  }

  void PopFront() {

    if (head == nullptr) {

      return;
    }

    if (head == tail) {

      std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

      delete head;
      head = nullptr;
    }
    else {

      deqObject* ptr = head;

      std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

      head = head->next;
      head->prev = nullptr;

      delete ptr;
    }
  }
  void PopBack() {

    if (tail == nullptr) {

      return;
    }

    if (head == tail) {

      std::cout << "Object {" << tail->data.name << ", " << tail->data.old << "} deleted" << std::endl;

      delete tail;

      tail = nullptr;
      head = nullptr;
    }
    else {

      deqObject* ptr = tail;

      std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} deleted" << std::endl;

      tail = tail->prev;
      tail->next = nullptr;

      delete ptr;
    }
  }

  void Delete() {

    while (head != nullptr) {

      this->PopFront();
    }

    std::cout << std::endl;
  }

private:

  deqObject* head;
  deqObject* tail;

};
```
## Очередь

Очередь - абстрактный тип данных с дисциплиной доступа к элементам FIFO (first-in-first-out).

Реализация на языке C++

```C++
struct data {

  std::string name;
  int old;
};
```
```C++
struct queueObject {

  data data;
  queueObject* prev;
  queueObject* next;
};
```
```C++
class Queue {

public:

  Queue() {

    head = nullptr;
    tail = nullptr;
  }

  void Push(data newData) {

    queueObject* ptr = new queueObject;
    ptr->data = newData;

    std::cout << "Object {" << ptr->data.name << ", " << ptr->data.old << "} added" << std::endl;

    if (head == nullptr) {

      ptr->prev = nullptr;
      ptr->next = nullptr;

      head = ptr;
      tail = ptr;
    }
    else {

      ptr->prev = tail;
      ptr->next = nullptr;

      tail->next = ptr;
      tail = ptr;
    }

  }

  void Show() {

    queueObject* ptr = head;

    while (ptr != nullptr) {

      std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
      ptr = ptr->next;
    }

    std::cout << std::endl;
  }

  void Pop() {

    if (head == nullptr) {

      return;
    }

    if (head == tail) {

      std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

      delete head;
      head = nullptr;
    }
    else {

      queueObject* ptr = head;

      std::cout << "Object {" << head->data.name << ", " << head->data.old << "} deleted" << std::endl;

      head = head->next;
      head->prev = nullptr;

      delete ptr;
    }
  }

  void Delete() {

      while (head != nullptr) {

      this->Pop();
    }
  }

private:

  queueObject* head;
  queueObject* tail;

};
```














