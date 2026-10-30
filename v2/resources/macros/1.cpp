// макросы не имеют ключевые слова внутри себя, иначе ошибка

init {
    inline size { 42 };
    inline func(x) { x + x };
}

init {
    inline snake_case {};
    inline SNAKE_CASE {};
}

class fmt {
    inline endl { '\n' };
    
    namespace constant {
        inline pi { 3.14 };
    }
}

using system::console::out::println;

init {
    using fmt::constant;
    
    println(fmt::endl);
    println(pi);
    println(fmt::constant::pi);
}
