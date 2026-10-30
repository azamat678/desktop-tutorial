// абстрактный класс
abstract class Character {
    abstract void attack();
}

class Employee : public Character {
    override void attack() {}
}

// виртуальный методы и наследования
class Base {
    virtual void function() {}
}

class Derived : public Base {
    override void function() {}
}

// режим доступа и this и поведение режим доступа в разных окружении
class Integer {
public:
    int x;
    
private:
    int y;
    
protected:
    int z;
}

class ConstructorInteger : public Integer {
    ConstructorInteger() {
        this->x = 0;
        this->z = 0;
    }
}

init {
    Integer object;
    
    object.x = 0;
}
