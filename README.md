# Шпаргалка для абстрактных типов данных

Типы:

1. Стек

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
struct obj {

  data data;
  obj* next;
};
```
```C++
class stack {

public:

  stack() {
    
    top = nullptr;
  }

  void push(data newData) {
  
    obj* ptr = new obj;

    ptr->data = newData;
    ptr->next = top;

    top = ptr;
  }
  
  void show() {
  
    obj* ptr = top;

    while (ptr != nullptr) {

      std::cout << "{" << ptr->data.name << ", " << ptr->data.old << "}" << std::endl;
      ptr = ptr->next;
    }

    std::cout << std::endl;
  }
  
  void pop() {
  
    if (top == nullptr) {

      return;
    }

    std::cout << "Object {" << top->data.name << ", " << top->data.old << "} deleted" << std::endl;

    obj* ptr = top->next;

    delete top;
    top = ptr;
  }

private:

  obj* top;

};
```









