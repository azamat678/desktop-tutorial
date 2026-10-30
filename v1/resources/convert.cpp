using system;
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
    
    // внизу так нельзя. Конвертация по С происходит, если есть два "()" блоков. где в первом один элемент - идентификатор
    //println((int)false);
}
