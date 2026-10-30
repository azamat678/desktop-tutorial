// возможные форматы в хранилище класса
class Class {
    class Object {}
    enum Enumeration { ONE, TWO, THREE }
    namespace ns {}
    
    inline MACROS { 42 };
    static int counter;
    static void printer() {}
    
    int n;
    void function() {}
}

// статический класс это класс, который не может иметь экземпляров класса
// члены статического класса должны быть пометены как static
// статический класс разрешает иметь внутри все статический члены, макросы, пространства имён, другие определения класса или перечисления или других форм данных, не принадлежащие экземплярам
static class Config {
    static int data;
}
