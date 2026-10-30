class Person {
    int get() const { return 42; }
    
    Person() {}
    
    ~Person() {}
    
    Person(const Person& person) {}
    
    Person(Person&& person) {}
}

class Operation {
    int operator +(int n) { return n * n; }
    
    void operator =(int n) {}
    
    int operator [](int index) { return index * index; }
}

init {
    const Person person;
    int num = person.get();
}