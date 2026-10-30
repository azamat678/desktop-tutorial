using system;
using system::convert;
using system::console::out::println;

init {
    // преобразование по байтом, по языку программирование С
    
    println((int)('A'));
    println((int)(false));
    println((int)("Hello, World"));
    
    println((char)(65));
    
    println((bool)(42));
    println((int)(nullptr));
    
    println((void*)("Hello, World"));
}

init {
    // функции из system::convert
    println(toUnsignedShort("123"));
    println(toUnsignedShort(3.14));
    
    println(toString('A'));
    println(toString(42));
    println(toString(3.14));
    println(toString(3.14f));
    println(toString(nullptr));
    println(toString((void*)("Hello, World")));
    
    // toBool на строках проверяет, пустой ли
    println(toBool("Hello, World"));
}
