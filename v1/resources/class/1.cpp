class Person {
    Person() {}
    
    ~Person() {}
    
    Person(const Person& person) {}
}

class Operator {
    Operator& operator +(int n) { return *this; }
}

init {
    const Person person;
    int num = person.get();
}